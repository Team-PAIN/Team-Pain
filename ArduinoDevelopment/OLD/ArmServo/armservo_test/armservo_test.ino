// Ziyi Wang
// Write for Team 2 Prototype1 Arm Test
// Reference two test programs below:
// zoomkat 10-4-10 serial servo test and Sweep by BARRAGAN <http://barraganstudio.com> 

#include <Servo.h> 
//pins difine
#define PIN_HAND 7
#define PIN_WRIST 6
#define PIN_SHOULDER 5
//range and initial values
#define INITIAL_HAND_POSITION 90
#define MIN_HAND_POSITION 90       // open
#define MAX_HAND_POSITION 180      //close
#define INITIAL_WRIST_POSITION 90
#define MIN_WRIST_POSITION 0
#define MAX_WRIST_POSITION 180
#define INITIAL_SHOULDER_POSITION 90
#define MIN_SHOULDER_POSITION 90
#define MAX_SHOULDER_POSITION 180
//for easy to read the code
#define HAND 0
#define WRIST 1
#define SHOULDER 2
#define MOVING_DELAY 20

String commandSend; //received the command from serial window
Servo handServo;  // create servo object to control the claw servo 
Servo wristServo;  // create servo object to control the upper arm servo 
Servo shoulderServo;  // create servo object to control the bottom arm servo 

int posNow[3] = {INITIAL_HAND_POSITION, INITIAL_WRIST_POSITION, INITIAL_SHOULDER_POSITION}; //initial position.
int degree[3];

void setup() {
  Serial.begin(9600);
  handServo.write(INITIAL_HAND_POSITION); //initial position
  handServo.attach(PIN_HAND);  //the pin for the hand servo control 
  wristServo.write(INITIAL_WRIST_POSITION); //initial position
  wristServo.attach(PIN_WRIST);  //the pin for the wrist servo control
  shoulderServo.write(INITIAL_SHOULDER_POSITION); //initial position
  shoulderServo.attach(PIN_SHOULDER);  //the pin for the shoulder servo control 
  Serial.println("Team 2 Prototype 1");
  Serial.println("Arm Test - Please input values:");
}

void loop() {
  //get degrees
  while (Serial.available()) {
    delay(1);  
    if (Serial.available() > 0) {
      char c = Serial.read();  //gets one byte from serial buffer
      commandSend += c; //makes the string commandSend
      Serial.print(c);
      Serial.println("has been add to String.");//some debug messages.
    } 
  }
  //change to numbers, and move servo
  if (commandSend.length() >0) {
    Serial.println(commandSend);  //so you can see the captured string
    char carray[12]; //converting string to number
    commandSend.toCharArray(carray, sizeof(carray));
    sscanf(carray,"%d %d %d",&degree[HAND],&degree[WRIST],&degree[SHOULDER]);
    checkDegree();
    Serial.println("Hand\tWrist\tShoulder");
    Serial.print(degree[HAND]);
    Serial.print("\t");
    Serial.print(degree[WRIST]);
    Serial.print("\t");
    Serial.print(degree[SHOULDER]);
    Serial.print("\n");
    //myServo.writeMicroseconds(n); // for microseconds
    driveServo(HAND, degree[HAND]);
    driveServo(WRIST, degree[WRIST]);
    driveServo(SHOULDER, degree[SHOULDER]);
    commandSend="";
  } 
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
    Serial.println("Warning: degree for hand is out of range. Set to initial value automatically.");
  }
  if(degree[WRIST] > MAX_WRIST_POSITION || degree[WRIST] < MIN_WRIST_POSITION){
    degree[WRIST] = INITIAL_WRIST_POSITION;
    Serial.println("Warning: degree for wrist is out of range. Set to initial value automatically.");
  }
  if(degree[SHOULDER] > MAX_SHOULDER_POSITION || degree[SHOULDER] < MIN_SHOULDER_POSITION){
    degree[SHOULDER] = INITIAL_SHOULDER_POSITION;
    Serial.println("Warning: degree for shoulder is out of range. Set to initial value automatically.");
  }
}
