/*=========================================================================================
/ Identification Subsystem (including slider) with FPGA serial communication enable V2.0
/ Working with Arduino MEGA
/ IR pins: A0, A1, A2
/ One Vertical IR(bottom) Vo to pin A0
/ Two horizontal IR(middle) Vo to pin A1, IR(top) Vo to pin A2, 
/ ColorPAL pins:
/ ColorPAL SIG to pin DIG52 and DIG53 (rx = 52, tx = 53). (see attachment below)
/ Slider controling pins:
/ Position output from slider pin to pin A3
/ H-bridge leg Neg PWM 2
/ H-bridge leg Pos PWM 3
/ Enable pin PWM4
/ Power pins:
/ All Vcc of sensors to 5V
/ Slider Vcc to 10V.
/ GND to GND
/ ========================================================================================
/ This Code works with Arduino Library 0.2X Only!
/ Reference to SensorWiki - http://ap.urpi.fei.stuba.sk/sensorwiki/index.php/Acrob040
/ Reference to ITP PHYSICAL COMPUTING - http://itp.nyu.edu/physcomp/Labs/DCMotorControl
/ Modified by Wing Wang for CEC420 - Senior Design Team 2 - Identification Subsystem
/=========================================================================================*/

/*-----------------------------------------------------------------------------------
//	Attachment - SIG to same port 52 and 53
//
// This oscillates back and forth on one wire to turn off led, send signal,
// turn on led, read signal. very fast strobe read - arduino is not capable of
// one wire signal communication over digital ports, so this is a way around
// that over 2 wires communicating with 1 pin on the sensor.
//-----------------------------------------------------------------------------------
*/


#include <SoftwareSerial.h> //use Arduino Library 0.2X Only!

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

//constent
//IR
#define IRS_BLK_HI 520
#define IRS_BLK_LO 480
#define IRS_RAM_HI 480
#define IRS_RAM_LO 480
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
#define COM_SEN_SP 1
#define COM_SEN_DE 1

//system stage
#define SYS_STG_ST 0
#define SYS_STG_ZO 1
#define SYS_STG_BL 2
#define SYS_STG_RP 3

SoftwareSerial ColorPAL(2, 3); 
int sysStage = SYS_STG_ST;


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
  
	//setup Motor pins and disable it at beginning
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
	//for debug info
	Serial.println("COM: initialized and reseted");
}

//main loop function - call by Arduino periodically
void loop(){
//use communication to get sytage from FPGA defalt is SYS_STG_ST

//working in different stage
	switch(sysStage){
		case SYS_STG_ST:
			//stage 0 initial
			sliderDriver(SLI_POS_ST);
			break;
		case SYS_STG_ZO:
			//stage 1 zone color
			sliderDriver(SLI_POS_ZO);
			break;
		case SYS_STG_BL:
			//stage 2 block id
			sliderDriver(SLI_POS_BL);
			break;
		case SYS_STG_RP:
			//stage 3 ramp edge
			sliderDriver(SLI_POS_RP);
			break;
		default:
			break;
  }


}  /* End of loop()*/



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

void comReset(){
	digitalWrite(PIN_COM_RE,HIGH);
	delay(1);
	digitalWrite(PIN_COM_RE,LOW);
}

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
}