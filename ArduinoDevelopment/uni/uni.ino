// Ziyi Wang
// Write for Team 2 Prototype1 Arm Working
// The arm will pick up a block in the foront then put it on the top of bettary.
// Reference two test programs below:
// zoomkat 10-4-10 serial servo test and Sweep by BARRAGAN <http://barraganstudio.com> 

//Servo part
#include <Servo.h> 
//pins difine
#define PIN_HAND 4
#define PIN_WRIST 3
#define PIN_SHOULDER 2
//range and initial values
#define INITIAL_HAND_POSITION 100
#define MIN_HAND_POSITION 100       // open
#define MAX_HAND_POSITION 160      //close
#define INITIAL_WRIST_POSITION 90
#define MIN_WRIST_POSITION 20
#define MAX_WRIST_POSITION 160
#define INITIAL_SHOULDER_POSITION 90
#define MIN_SHOULDER_POSITION 20
#define MAX_SHOULDER_POSITION 160
//for easy to read the code
#define HAND 0
#define WRIST 1
#define SHOULDER 2
#define MOVING_DELAY 15
#define STAGE_DELAY 100

Servo handServo;  // create servo object to control the claw servo 
Servo wristServo;  // create servo object to control the upper arm servo 
Servo shoulderServo;  // create servo object to control the bottom arm servo 

int posNow[3] = {INITIAL_HAND_POSITION, INITIAL_WRIST_POSITION, INITIAL_SHOULDER_POSITION}; //initial position.
int degree[3];

//sensor and sender
const int sdata_1 = 7;
const int sdata_2 = 8;
const int sclk = 5;
const int reset = 6;
uint16_t data;
int temp_1;
int temp_2;
int sendCoun;

#define SENDBITS 8
#define MASK 1
// this constant won't change.  It's the pin number
// of the sensor's output:
const int pingPinL = 10;//Left
const int pingPinR = 9;//Right
boolean isLeft = true;
boolean isSetup = false;

// establish variables for duration of the ping, 
// and the distance result in inches and centimeters:
long durationL, inchesL, cmL;
long durationR, inchesR, cmR;


void setup() {
  //Servo part
  handServo.write(INITIAL_HAND_POSITION); //initial position
  handServo.attach(PIN_HAND);  //the pin for the hand servo control 
  wristServo.write(INITIAL_WRIST_POSITION); //initial position
  wristServo.attach(PIN_WRIST);  //the pin for the wrist servo control
  shoulderServo.write(INITIAL_SHOULDER_POSITION); //initial position
  shoulderServo.attach(PIN_SHOULDER);  //the pin for the shoulder servo control 
  //sensor and sender
  pinMode(sdata_1, OUTPUT);
  pinMode(sdata_2, OUTPUT);
  digitalWrite(sdata_1, LOW);
  digitalWrite(sdata_2, LOW);
  pinMode(sclk, OUTPUT);
  digitalWrite(sclk, LOW);
  digitalWrite(reset, HIGH);
  Serial.print("SETUP");
}


void loop() {
    sensorLoop();
    //open hand and move arm down.
    degree[HAND] = 110;
    degree[WRIST] = 70;
    degree[SHOULDER] = 160;
    driveServo(HAND, degree[HAND]);
    driveServo(WRIST, degree[WRIST]);
    driveServo(SHOULDER, degree[SHOULDER]);
    delay(STAGE_DELAY);
    sensorLoop();
    //pick
    degree[HAND] = 130;
    degree[WRIST] = 70;
    degree[SHOULDER] = 160;
    driveServo(HAND, degree[HAND]);
    driveServo(WRIST, degree[WRIST]);
    driveServo(SHOULDER, degree[SHOULDER]);
    delay(STAGE_DELAY);
    sensorLoop();
    //rise up.
    degree[HAND] = 130;
    degree[WRIST] = 90;
    degree[SHOULDER] = 90;
    driveServo(HAND, degree[HAND]);
    driveServo(WRIST, degree[WRIST]);
    driveServo(SHOULDER, degree[SHOULDER]);
    //no delay here.
    sensorLoop();
    //put on the bettery.
    degree[HAND] = 130;
    degree[WRIST] = 170;
    degree[SHOULDER] = 90;
    driveServo(HAND, degree[HAND]);
    driveServo(WRIST, degree[WRIST]);
    driveServo(SHOULDER, degree[SHOULDER]);
    delay(STAGE_DELAY);
    sensorLoop();
    //release
    degree[HAND] = 110;
    degree[WRIST] = 160;
    degree[SHOULDER] = 90;
    driveServo(HAND, degree[HAND]);
    driveServo(WRIST, degree[WRIST]);
    driveServo(SHOULDER, degree[SHOULDER]);
    delay(STAGE_DELAY);
    sensorLoop();
    //back to initial
    degree[HAND] = INITIAL_HAND_POSITION;
    degree[WRIST] = INITIAL_WRIST_POSITION;
    degree[SHOULDER] = INITIAL_SHOULDER_POSITION;
    driveServo(HAND, degree[HAND]);
    driveServo(WRIST, degree[WRIST]);
    driveServo(SHOULDER, degree[SHOULDER]);
    delay(STAGE_DELAY);
}

void driveServo(int id, int degreeTo){
  if(posNow[id] < degreeTo)
    for(; posNow[id] < degreeTo; posNow[id] += 1)  // goes from 0 degrees to 180 degrees 
    {                                  // in steps of 1 degree
      switch(id)
      {
        case 0:
          handServo.write(posNow[id]);                     // tell servo to go to position in variable 'pos'
        break;
        case 1:
          wristServo.write(posNow[id]);
        break;
        case 2:
          shoulderServo.write(posNow[id]);
        break;
      }
      delay(MOVING_DELAY);
    } 
  else
    for(; posNow[id] > degreeTo; posNow[id] -= 1)  // goes from 0 degrees to 180 degrees 
    {                                  // in steps of 1 degree 
       switch(id)
      {
        case HAND:
          handServo.write(posNow[id]);                     // tell servo to go to position in variable 'pos'
        break;
        case WRIST:
          wristServo.write(posNow[id]);
        break;
        case SHOULDER:
          shoulderServo.write(posNow[id]);
        break;
      }
      delay(MOVING_DELAY);                       // waits some time for the servo to reach the position 
    } 
}

void checkDegree(){
  if(degree[HAND] > MAX_HAND_POSITION || degree[HAND] < MIN_HAND_POSITION){
    degree[HAND] = INITIAL_HAND_POSITION;
    //Serial.println("Warning: degree for hand is out of range. Set to initial value automatically.");
  }
  if(degree[WRIST] > MAX_WRIST_POSITION || degree[WRIST] < MIN_WRIST_POSITION){
    degree[WRIST] = INITIAL_WRIST_POSITION;
    //Serial.println("Warning: degree for wrist is out of range. Set to initial value automatically.");
  }
  if(degree[SHOULDER] > MAX_SHOULDER_POSITION || degree[SHOULDER] < MIN_SHOULDER_POSITION){
    degree[SHOULDER] = INITIAL_SHOULDER_POSITION;
    //Serial.println("Warning: degree for shoulder is out of range. Set to initial value automatically.");
  }
}



void sensorLoop()
{
  // The PING))) is triggered by a HIGH pulse of 2 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  // The same pin is used to read the signal from the PING))): a HIGH
  // pulse whose duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  
  if(isLeft == true){
    pinMode(pingPinL, OUTPUT);
    digitalWrite(pingPinL, LOW);
    delayMicroseconds(2);
    digitalWrite(pingPinL, HIGH);
    delayMicroseconds(5);
    digitalWrite(pingPinL, LOW);
    pinMode(pingPinL, INPUT);
    durationL = pulseIn(pingPinL, HIGH);
    // convert the time into a distance
    inchesL = microsecondsToInches(durationL);
    //cmL = microsecondsToCentimeters(durationL);
    isLeft = false;
  }
  else{
    pinMode(pingPinR, OUTPUT);
    digitalWrite(pingPinR, LOW);
    delayMicroseconds(2);
    digitalWrite(pingPinR, HIGH);
    delayMicroseconds(5);
    digitalWrite(pingPinR, LOW);
    pinMode(pingPinR, INPUT);
    durationR = pulseIn(pingPinR, HIGH);
    // convert the time into a distance
    inchesR = microsecondsToInches(durationR);
    //cmR = microsecondsToCentimeters(durationR);
    isLeft = true;
  }

  if(isSetup == true){
    Serial.print("Left");
    Serial.print(inchesL,HEX);
    Serial.print("in");
    //Serial.print(cmL);
    //Serial.print("cm");
    Serial.println();
  
    Serial.print("Right");
    Serial.print(inchesR,HEX);
    Serial.print("in");
    //Serial.print(cmR);
    //Serial.print("cm");
    Serial.println();
  /*
    if((cmL - cmR) > 3)
      Serial.println("Right turn.");
    else if((cmR - cmL) > 3)
      Serial.println("Left turn.");
  */
  }
  else{
    Serial.println("Setup the system now...");
    isSetup =true;
  }
  
  getValue();
  digitalWrite(reset, HIGH);
  delayMicroseconds(10);
  digitalWrite(reset, LOW);
  sending();
  delay(1000);
}

void sending(){
  Serial.print("output: ");
  Serial.print(data,HEX);
  Serial.print("\n");
  
  //for data reviewing test only
  Serial.print("in binary: \n");
  Serial.print("line1\tline2\n");
  for(sendCoun = 0; sendCoun < SENDBITS; sendCoun++){
    temp_1 = data >> sendCoun;
    temp_1 = temp_1 & MASK;
    temp_2 = data >> (sendCoun + 8);
    temp_2 = temp_2 & MASK;
    Serial.print((int)temp_1);
    Serial.print("\t");
    Serial.print((int)temp_2);
    Serial.print("\n");
  }
  //Serial.print("\n");
  //could be delete after test
  
  //sending
  for(sendCoun = 0; sendCoun < SENDBITS; sendCoun++){
    temp_1 = data >> sendCoun;
    temp_1 = temp_1 & MASK;
    temp_2 = data >> (sendCoun + 8);
    temp_2 = temp_2 & MASK;
    
    if(temp_1 == 1 && temp_1 == 1){
      digitalWrite(sdata_1, HIGH);
      digitalWrite(sdata_2, HIGH);
      Serial.print("data line 1: high\n");
      Serial.print("data line 2: high\n");
    }
    else if(temp_1 == 1 && temp_2 == 0){
      digitalWrite(sdata_1, HIGH);
      digitalWrite(sdata_2, LOW);
      Serial.print("data line 1: high\n");
      Serial.print("data line 2: low\n");
    }
    else if(temp_1 == 0 && temp_2 == 1){
      digitalWrite(sdata_1, LOW);
      digitalWrite(sdata_2, HIGH);
      Serial.print("data line 1: low\n");
      Serial.print("data line 2: high\n");
    }
    else if(temp_1 == 0 && temp_2 == 0){
      digitalWrite(sdata_1, LOW);
      digitalWrite(sdata_2, LOW);
      Serial.print("data line 1: low\n");
      Serial.print("data line 2: low\n");
    }
    //clock
    digitalWrite(sclk, HIGH);
    Serial.print("clk line: high\n");
    delayMicroseconds(10);
    digitalWrite(sclk, LOW);
    Serial.print("clk line: low\n");
    delayMicroseconds(2);
    
    //for test delay
    //delay(1000);
    //Serial.print("\n");
    //for test delay end
  }
  Serial.print("\n");
}

void getValue(){
   if(inchesL > 255){
     inchesL = 255;
     Serial.print("Left value is more than 255!\n");
   }
   if(inchesR > 255){
     inchesR = 255;
     Serial.print("Right value is more than 255\n");
   }
   data = inchesR | (inchesL<<8);
   //data = inchesR;
}

long microsecondsToInches(long microseconds)
{
  // According to Parallax's datasheet for the PING))), there are
  // 73.746 microseconds per inch (i.e. sound travels at 1130 feet per
  // second).  This gives the distance travelled by the ping, outbound
  // and return, so we divide by 2 to get the distance of the obstacle.
  // See: http://www.parallax.com/dl/docs/prod/acc/28015-PING-v1.3.pdf
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds)
{
  // The speed of sound is 340 m/s or 29 microseconds per centimeter.
  // The ping travels out and back, so to find the distance of the
  // object we take half of the distance travelled.
  return microseconds / 29 / 2;
}
