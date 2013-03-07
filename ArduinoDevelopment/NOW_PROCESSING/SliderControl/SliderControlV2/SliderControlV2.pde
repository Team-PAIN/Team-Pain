/*=========================================================================================
/ Slider Control V.1
/ Working with Arduino MEGA
/ Position votage output pin to pin A0
/ ENABLE to PWN 4
/ PIN_MOTOPS to PWM 3
/ PIN_MOTONG to PWM 2
/ ========================================================================================
/ Modified by Wing Wang for CEC420 - Senior Design Team 2 Block Identification Subsystem
/=========================================================================================*/
/*
refer: http://itp.nyu.edu/physcomp/Labs/DCMotorControl
*/
//Slider controling pins
#define PIN_SLI_PO A3
#define PIN_SLI_EN 4
#define PIN_SLI_PS 3
#define PIN_SLI_NG 2
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


void setup(){
  Serial.begin(9600); 
  	//setup Slider Motor pins and disable it at beginning
	pinMode(PIN_SLI_EN, OUTPUT);
	pinMode(PIN_SLI_PS, OUTPUT);
	pinMode(PIN_SLI_NG, OUTPUT);
	digitalWrite(PIN_SLI_EN, LOW);  // set enablePin low so that motor is turned off:
	//for debug info
	Serial.println("SLI: initialized and disabled");
}
void loop(){
  
  sliderDriver(SLI_POS_ST);
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
