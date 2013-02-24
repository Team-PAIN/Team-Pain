/*  Identification Subsystem (including slider) with FPGA serial communication enable V2.5  /
/                    Working with Arduino MEGA and Arduino Library 0.2X                     /
/     Modified by Wing Wang for CEC420 - Senior Design Team 2 - Identification Subsystem    /
/==========================================================================================*/
/*===================PINS SETUP=================/
/ IR pins: Analog0, Analog1, Analog2            /
/          One Vertical IR(bottom)   Vo --> A0  /
/          Two horizontal IR(middle) Vo --> A1  /
/                         IR(top)    Vo --> A2  /
/-----------------------------------------------/=============================/
/ ColorPAL pins: Digital52, Digital53                                         /          
/               SIG --> 52 and 53 (rx = 52, tx = 53)                          /
                 |_____________/                                              /
/ Attachment reading:                                                         /
/ ~~~~~~~~~~~~~~~~~~~                                                         /
/ This oscillates back and forth on one wire to turn off led, send signal,    /
/ turn on led, read signal. very fast strobe read - arduino is not capable of /
/ one wire signal communication over digital ports, so this is a way around   /
/ that over 2 wires communicating with 1 pin on the sensor.                   /
/-------------------------------------------------------/======================
/ Slider Controling pins: Analog3, PWM 2, PWM 3, PWM 4  /
/                         Position voltage --> A3       /
/                         H-bridge leg Neg --> PWM 2    /
/                         H-bridge leg Pos --> PWM 3    /
/                         H-bridge Enable  --> PWM 4    /
/-------------------------------------------------------/
/ Communication pins: OUTPUT - PWM 5,PWM 6, PWM 7       /
/                     INPUT  - PWM 8, PWM 9             /
/                     CLOCK   --> PWM 5                 /
/                     DATA    --> PWM 6                 /
/                     RESET   --> PWM 7                 /
/                     STAGE_0 --> PWM 8                 /
/                     STAGE_1 --> PWM 9                 /
/-------------------------------------------------------/
/ Power pins:                                           /
/ Sensors --> 5V  from Voltage Regulator circuit        /
/ Slider  --> 10V PWM from H-bridge circuit             /
/======================================================*/
/*================================IMPORTANT INFORMATION==================================/
/ This Code works with Arduino Library 0.2X Only!                                        /
/ Reference to SensorWiki - http://ap.urpi.fei.stuba.sk/sensorwiki/index.php/Acrob040    /
/ Reference to ITP PHYSICAL COMPUTING - http://itp.nyu.edu/physcomp/Labs/DCMotorControl  /
/=======================================================================================*/

//Use Arduino Library 0.2X Only!
#include <SoftwareSerial.h> 

//define pins
//IR pins
#define PIN_IRS_VB A0
#define PIN_IRS_HM A1
#define PIN_IRS_HT A2
//ColorPAL pins
#define PIN_COL_RX 52
#define PIN_COL_TX 53
//Slider controling pins
#define PIN_SLI_PO A3
#define PIN_SLI_EN 4
#define PIN_SLI_PS 3
#define PIN_SLI_NG 2
//Communication FPGA
#define PIN_COM_CL 5
#define PIN_COM_DA 6
#define PIN_COM_RE 7
#define PIN_COM_S1 8
#define PIN_COM_S2 9

//constent
//IR
#define IRS_BLK_HI 520
#define IRS_BLK_LO 480
#define IRS_RAM_HI 480
#define IRS_RAM_LO 480
#define IRS_ATD_DE 1 //convert delay
//ColorPAL
#define COL_BUF_SZ 20 //color sampling size
//Slider
#define SLI_PWM_HI 4
#define SLI_PWM_LO 1
#define SLI_FIL_DE 1 //delay
#define SLI_POS_IN 0 //initial position
#define SLI_POS_ST 0
#define SLI_POS_ZO 400
#define SLI_POS_BL 821
#define SLI_POS_RP 821
#define SLI_POS_FI 821 //final position

//communication with FPGA
#define COM_COL_RE 0
#define COM_COL_OR 1
#define COM_COL_YE 2
#define COM_COL_GR 3
#define COM_COL_BL 4
#define COM_COL_BR 5
#define COM_COL_NU 15 //(F)
#define COM_ZON_AI 0
#define COM_ZON_SE 1
#define COM_ZON_RA 2
#define COM_ZON_NU 15 //(F)
#define COM_SEN_SP 1 //transfer speed low is faster
#define COM_SEN_DE 1 //delay between signal change

//system stage
#define SYS_STG_ST 0
#define SYS_STG_ZO 1
#define SYS_STG_BL 2
#define SYS_STG_RP 3


SoftwareSerial ColorPAL(2, 3); 
int sysStage = SYS_STG_ST;
boolean isChecked = true;
int sizeTemp = COM_ZON_NU;
int colorTemp = COM_COL_NU;

//initial function - call by Arduino at the beginning of the system started.
void setup(){
	//for debug info
	Serial.println("SYS: initial the system.");
    
	//setup Serial to Computer
	//for debuging
	Serial.begin(9600); // Start communication with serial port, send the results to the computer.
  
	//setup ColorPAL pins and make it working continusely
	colorPALInitial();
	//for debug info
	Serial.println("COL: initialized");
  
	//setup Slider Motor pins and disable it at beginning
	pinMode(PIN_SLI_EN, OUTPUT);
	pinMode(PIN_SLI_PS, OUTPUT);
	pinMode(PIN_SLI_NG, OUTPUT);
	digitalWrite(PIN_SLI_EN, LOW);  // set enablePin low so that motor is turned off:
	//for debug info
	Serial.println("SLI: initialized and disabled");
  
	//setup FPGA communication
	pinMode(PIN_COM_CL,OUTPUT);
	pinMode(PIN_COM_DA,OUTPUT);
	pinMode(PIN_COM_RE,OUTPUT);
	digitalWrite(PIN_COM_CL,LOW);
	digitalWrite(PIN_COM_DA,LOW);
	comReset();
	pinMode(PIN_COM_S1,INPUT);
	pinMode(PIN_COM_S2,INPUT);
	
	//for debug info
	Serial.println("COM: initialized and reseted");
}

//main loop function - call by Arduino periodically
void loop(){
//use communication to get sytage from FPGA defalt is SYS_STG_ST
	comReadStage();
//working in different stage
	switch(sysStage){
		case SYS_STG_ST:
			//stage 0 initial
			sliderDriver(SLI_POS_ST);
			break;
		case SYS_STG_ZO:
			//stage 1 zone color
			sliderDriver(SLI_POS_ZO);
			checkZone();
			break;
		case SYS_STG_BL:
			//stage 2 block id
			sliderDriver(SLI_POS_BL);
			checkBlock();
			break;
		case SYS_STG_RP:
			//stage 3 ramp edge
			sliderDriver(SLI_POS_RP);
			checkRamp();
			break;
		default:
			sliderDriver(SLI_POS_ST);
			break;
  }

}  /* End of loop()*/


/*ColorPAL Sensor functions
*/

void colorPALInitial(){
	ColorPAL.begin(4800);
	pinMode(PIN_COL_RX,INPUT); // serial pin out from colorpal
	pinMode(PIN_COL_TX,INPUT); // from same serial pin, signal pulls up, sends, pulls down, reads
	digitalWrite(PIN_COL_RX,HIGH); // Enable the pull-up resistor
	digitalWrite(PIN_COL_TX,HIGH); // Enable the pull-up resistor
	pinMode(PIN_COL_RX,OUTPUT); // send signal out
	pinMode(PIN_COL_TX,OUTPUT);
	digitalWrite(PIN_COL_RX,LOW); // turn pin off so pin 3 can go high
	digitalWrite(PIN_COL_TX,LOW);
	pinMode(PIN_COL_RX,INPUT); // Input signal to print
	pinMode(PIN_COL_TX,INPUT);
	delay(20);
	while( digitalRead(PIN_COL_RX) != HIGH || digitalRead(PIN_COL_TX) != HIGH ) {
		delay(50);
	}
	pinMode(PIN_COL_RX,OUTPUT);
	pinMode(PIN_COL_TX,OUTPUT);
	digitalWrite(PIN_COL_RX,LOW);
	digitalWrite(PIN_COL_TX,LOW);
	delay(100); // spec is 80, but not all ColorPAL units work with 80
	pinMode(PIN_COL_RX,INPUT);
	pinMode(PIN_COL_TX,OUTPUT);
	delay(20);
	ColorPAL.begin(4800); // start the communication with serial port to the ColorPAL.
	ColorPAL.print("= (00 $ m) !"); // set up loop to continuously send color data
	pinMode(PIN_COL_TX,INPUT);
}

void checkColor(){
}
void checkZone(){
}

/*IR Sensor functions
*/
//this function will detected new block then call the check algorithm(size & color), call by loop().
void checkBlock(){
	//read the IR voltage
	float volts0 = analogRead(PIN_IRS_VB);
	delay(IRS_ATD_DE);
	//If vertical IR detected the gap between blocks and print flag is not set.
	if(volts0 > IRS_BLK_HI && !isChecked){
		isChecked = true;//set flag
		checkSize();
		checkColor();
		sendBlock();
	}
	//If vertical IR detected next block, clean the flag. 
	if(volts0 < IRS_BLK_LO){
		isChecked = false;
	}
}
void checkSize(){
//read the IR voltage
	float volts1 = analogRead(PIN_IRS_HM);
	delay(IRS_ATD_DE);
	float volts2 = analogRead(PIN_IRS_HT);
	delay(IRS_ATD_DE);
	//top and middle are not detect. small block - air
	if(volts1 > IRS_BLK_LO && volts2 > IRS_BLK_LO){
		Serial.println("Air block!");
		sizeTemp = COM_ZON_AI;
	}
	//top is not detect, middle is detected. middle block - sea
	else if(volts1 < IRS_BLK_HI && volts2 > IRS_BLK_LO){
		Serial.println("Sea block!");
		sizeTemp = COM_ZON_SE;
	}
	//top and middle are detect. big block - rail
	else if(volts1 < IRS_BLK_HI && volts2 < IRS_BLK_HI){
		Serial.println("Rail block!");
		sizeTemp = COM_ZON_RA;
	}
}

void checkRamp(){
	
}





/*FPGA Communication functions
*/
void comReset(){
	digitalWrite(PIN_COM_RE,HIGH);
	delay(COM_SEN_SP);
	digitalWrite(PIN_COM_RE,LOW);
}

void comReadStage(){
	if(digitalRead(PIN_COM_S1) == LOW && digitalRead(PIN_COM_S2) == LOW){
		sysStage = SLI_POS_ST;
	}
	else if(digitalRead(PIN_COM_S1) == HIGH && digitalRead(PIN_COM_S2) == LOW){
		sysStage = SLI_POS_ZO;
	}
	else if(digitalRead(PIN_COM_S1) == LOW && digitalRead(PIN_COM_S2) == HIGH){
		sysStage = SLI_POS_BL;
	}
	else if(digitalRead(PIN_COM_S1) == HIGH && digitalRead(PIN_COM_S2) == HIGH){
		sysStage = SLI_POS_RP;
	}
	else{
		sysStage = SLI_POS_ST;
	}
}

void sendBlock(){
  char sendData = (sizeTemp<<4) + colorTemp;
  Serial.print("sendSize:");
  Serial.println(sizeTemp);
  Serial.print("sendColor:");
  Serial.println(colorTemp);
  Serial.print("sendData:");
  Serial.println(sendData);
  comReset();
  sendChar(sendData, PIN_COM_DA, PIN_COM_CL);
}

void sendChar(char sendData, int datPin, int clkPin){
  Serial.println("dat start");
  for(int i = 0; i < 8; i++){
    delay(COM_SEN_SP);
    if((sendData&1) == 1){
      Serial.print("1");
      digitalWrite(datPin,HIGH);
      delay(COM_SEN_DE);
      digitalWrite(clkPin,HIGH);
      delay(COM_SEN_DE);
      digitalWrite(clkPin,LOW);
      //digitalWrite(datPin,LOW);
      delay(COM_SEN_DE);
    }
    else{
      Serial.print("0");
      digitalWrite(datPin,LOW);
      delay(COM_SEN_DE);
      digitalWrite(clkPin,HIGH);
      delay(COM_SEN_DE);
      digitalWrite(clkPin,LOW);
      //digitalWrite(datPin,LOW);
      delay(COM_SEN_DE);
    }
    sendData = sendData>>1;
  }
  Serial.println("");
}

/*Slider control functions
*/
void sliderDriver(int setPosition){
	if(setPosition <= SLI_POS_FI && setPosition>=SLI_POS_IN){
		boolean isMoving = true;
		digitalWrite(PIN_SLI_EN, HIGH);
		do{
			int currentPosition = analogRead(PIN_SLI_PO);
			if(currentPosition < setPosition){
				digitalWrite(PIN_SLI_PS, LOW);
				digitalWrite(PIN_SLI_NG, HIGH);
				delay(SLI_PWM_HI);
				digitalWrite(PIN_SLI_PS, LOW);
				digitalWrite(PIN_SLI_NG, LOW);
				delay(SLI_PWM_LO);
			}
			else if(currentPosition > setPosition){
				digitalWrite(PIN_SLI_PS, HIGH);
				digitalWrite(PIN_SLI_NG, LOW);
				delay(SLI_PWM_HI);
				digitalWrite(PIN_SLI_PS, LOW);
				digitalWrite(PIN_SLI_NG, LOW);
				delay(SLI_PWM_LO);
			}
			else{
				delay(SLI_FIL_DE);
				if(currentPosition == setPosition){
					isMoving = false;
					digitalWrite(PIN_SLI_EN, LOW);
				}
			}
		} while(isMoving);
	}
	else{
		Serial.println("SLI: invalid position!");
	}
}