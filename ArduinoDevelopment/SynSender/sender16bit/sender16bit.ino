const int sdata = 9;
const int sclk = 8;

uint16_t data;
int temp;
int sendCoun;

#define SENDBITS 16
#define MASK 1


/* Ping))) Sensor
  
   This sketch reads a PING))) ultrasonic rangefinder and returns the
   distance to the closest object in range. To do this, it sends a pulse
   to the sensor to initiate a reading, then listens for a pulse 
   to return.  The length of the returning pulse is proportional to 
   the distance of the object from the sensor.
     
   The circuit:
	* +V connection of the PING))) attached to +5V
	* GND connection of the PING))) attached to ground
	* SIG connection of the PING))) attached to digital pin 7

   http://www.arduino.cc/en/Tutorial/Ping
   
   created 3 Nov 2008
   by David A. Mellis
   modified 30 Aug 2011
   by Tom Igoe
 
   This example code is in the public domain.

 */

// this constant won't change.  It's the pin number
// of the sensor's output:
const int pingPinL = 2;//Left
const int pingPinR = 3;//Right
boolean isLeft = true;
boolean isSetup = false;

// establish variables for duration of the ping, 
// and the distance result in inches and centimeters:
long durationL, inchesL, cmL;
long durationR, inchesR, cmR;



void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  pinMode(sdata, OUTPUT);
  digitalWrite(sdata, LOW);
  pinMode(sclk, OUTPUT);
  digitalWrite(sclk, LOW);
}

void loop()
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
  sending();
  delay(100);
}

void sending(){
  Serial.print("output: ");
  Serial.print(data,HEX);
  Serial.print("\n");
  
  //for data reviewing test only
  Serial.print("in binary: ");
  for(sendCoun = 0; sendCoun < SENDBITS; sendCoun++){
    temp = data >> sendCoun;
    temp = temp & MASK;
    Serial.print((int)temp);
  }
  //Serial.print("\n");
  //could be delete after test
  
  //sending
  for(sendCoun = 0; sendCoun < SENDBITS; sendCoun++){
    temp = data >> sendCoun;
    temp = temp & MASK;
    if(temp == 1){
      digitalWrite(sdata, HIGH);
      //Serial.print("data line: high\n");
    }
    else{
      digitalWrite(sdata, LOW);
      //Serial.print("data line: low\n");
    }
    //clock
    digitalWrite(sclk, HIGH);
    //Serial.print("clk line: high\n");
    delayMicroseconds(5);
    digitalWrite(sclk, LOW);
    //Serial.print("clk line: low\n");
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
