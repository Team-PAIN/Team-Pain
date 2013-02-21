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
#define PIN_ENABLE 4
#define PIN_MOTOPS 3
#define PIN_MOTONG 2

#define DELAY_HIGH 4
#define DELAY_LOW 1
#define PIN_POSIN A0
#define FILTER_DELAY 1

#define START 2
#define STOP 821

int posValue = 0;
int enablePin = PIN_ENABLE;
int motopsPin = PIN_MOTOPS;
int motongPin = PIN_MOTONG;
boolean enable = true;
boolean backward = true;

void setup(){
  Serial.begin(9600); 
  pinMode(enablePin, OUTPUT);
  pinMode(motopsPin, OUTPUT);
  pinMode(motongPin, OUTPUT);
  
  // set enablePin high so that motor can turn on:
  digitalWrite(enablePin, LOW); 
}
void loop(){
    posValue = analogRead(PIN_POSIN);
    Serial.println(posValue);
    if(posValue >= STOP && enable && backward){
      delay(FILTER_DELAY);
      if(posValue >= STOP && enable && backward){
        backward = false;
        digitalWrite(enablePin, LOW);
        delay(1000);
        digitalWrite(enablePin, HIGH);
    }
    }
    else if(posValue <= START && enable && !backward){
      delay(FILTER_DELAY);
      if(posValue <= START && enable && !backward){
        backward = true;
        digitalWrite(enablePin, LOW);
        delay(1000);
        digitalWrite(enablePin, HIGH);
      }
    }
  if(enable){
      if(backward){
        digitalWrite(motopsPin, HIGH);
        digitalWrite(motongPin, LOW);
        delay(DELAY_HIGH);
        digitalWrite(motopsPin, LOW);
        digitalWrite(motongPin, LOW);
        delay(DELAY_LOW);
      }
    else{
      digitalWrite(motopsPin, LOW);
      digitalWrite(motongPin, HIGH);
      delay(DELAY_HIGH);
      digitalWrite(motopsPin, LOW);
      digitalWrite(motongPin, LOW);
      delay(DELAY_LOW);
    }
  }

}
