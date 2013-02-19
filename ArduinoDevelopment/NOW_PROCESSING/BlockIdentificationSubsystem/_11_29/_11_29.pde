/*=========================================================================================
/ Block Identification Subsystem V1.0
/ Working with Arduino MEGA
/ One Vertical IR(bottom) Vo to pin A0
/ Two horizontal IR(middle) Vo to pin A1, IR(top) Vo to pin A2, 
/ ColorPAL SIG to pin PWM2 and PWM3 (rx = 2, tx = 3). (see attachment below)
/ All Vcc of sensors to 5V, GND to GND
/ ========================================================================================
/ This Code works with Arduino Library 0.2X Only!
/ Reference to SensorWiki - http://ap.urpi.fei.stuba.sk/sensorwiki/index.php/Acrob040
/ Modified by Wing Wang for CEC420 - Senior Design Team 2 Block Identification Subsystem
/=========================================================================================*/

/*-----------------------------------------------------------------------------------
//	Attachment - SIG to same port 2 and 3
//
// This oscillates back and forth on one wire to turn off led, send signal,
// turn on led, read signal. very fast strobe read - arduino is not capable of
// one wire signal communication over digital ports, so this is a way around
// that over 2 wires communicating with 1 pin on the sensor.
//-----------------------------------------------------------------------------------
*/

#include <SoftwareSerial.h> //use Arduino Library 0.2X Only!

#define HIGH_IR 520
#define LOW_IR 480
#define COLORSIZE 20 //color sampling size

SoftwareSerial ColorPAL(2, 3); 

int IRpin0 = 0;                                    // bottom IR - vertical
int IRpin1 = 1;                                    // middle IR
int IRpin2 = 2;                                    // top IR

int colorByte[3][COLORSIZE]; //sampling buffer

boolean isPrinted = true; //flag for block counting

//initial function - call by Arduino at the beginning of the system started.
void setup(){
	Serial.begin(9600); // Start communication with serial port, send the results to the computer.
	ColorPAL.begin(4800); // start the communication with serial port to the ColorPAL.
	pinMode(2,INPUT); // serial pin out from colorpal
	pinMode(3,INPUT); // from same serial pin, signal pulls up, sends, pulls down, reads
	digitalWrite(2,HIGH); // Enable the pull-up resistor
	digitalWrite(3,HIGH); // Enable the pull-up resistor
	pinMode(2,OUTPUT); // send signal out
	pinMode(3,OUTPUT);
	digitalWrite(2,LOW); // turn pin off so pin 3 can go high
	digitalWrite(3,LOW);
	pinMode(2,INPUT); // Input signal to print
	pinMode(3,INPUT);
	delay(20);
	while( digitalRead(2) != HIGH || digitalRead(3) != HIGH ) {
		delay(50);
	}
	pinMode(2,OUTPUT);
	pinMode(3,OUTPUT);
	digitalWrite(2,LOW);
	digitalWrite(3,LOW);
	delay(100); // spec is 80, but not all ColorPAL units work with 80
	pinMode(2,INPUT);
	pinMode(3,OUTPUT);
	delay(20);
	ColorPAL.begin(4800);
	ColorPAL.print("= (00 $ m) !"); // set up loop to continuously send color data
	pinMode(3,INPUT);
}

//main loop function - call by Arduino periodically
void loop(){

  checkBlock();
  
  delay(10);

}  /* End of loop()  */

//this function will detected new block then call the check algorithm(size & color), call by loop().
void checkBlock(){
//read the IR voltage
  float volts0 = analogRead(IRpin0);
  delay(10);
  float volts1 = analogRead(IRpin1);
  delay(10);
  float volts2 = analogRead(IRpin2);
  delay(10);
  //If vertical IR detected the gap between blocks and print flag is not set.
  if(volts0 > HIGH_IR && !isPrinted){
    isPrinted = true;//set flag
    checkSize(volts1, volts2);//call size checking function.
    checkColor();//call color checking function.
    delay(5);
  }
  //If vertical IR detected next block, clean the flag. 
  if(volts0 < LOW_IR){
    isPrinted = false;
  }
}

//this function could convert the ASCII char value to hexadecimal. call by block checking algorithm - checkreadColorArray()
int hexChar2Num(char hexChar){
  if(hexChar >= 48 && hexChar <= 57)
    return (hexChar - 48);
  else if(hexChar >= 65 && hexChar <= 70)
    return (hexChar - 55);
  else if((hexChar >= 97 && hexChar <= 102))
    return (hexChar - 87);
  else//not in range return 0.
    return 0;
}

//this function contains the block checking algorithm. Call by checkBlock()
void checkSize(float volts1, float volts2){
//top and middle are not detect. small block - air
  if(volts1 > LOW_IR && volts2 > LOW_IR){
    Serial.println("Air block!");
  }
//top is not detect, middle is detected. middle block - sea
  else if(volts1 < HIGH_IR && volts2 > LOW_IR){
    Serial.println("Sea block!");
  }
//top and middle are detect. big block - rail
  else if(volts1 < HIGH_IR && volts2 < HIGH_IR){
    Serial.println("Rail block!");
  }
}

//this function could collect necessary samples for color checking. the number of sampling is define by COLORSIZE. Call by colorCheck()
void readColorArray(){
  char rByte[9];
  char dummy[4];
  int colorNum = 0;
  
  pinMode(3,INPUT);
  while(colorNum < COLORSIZE){
    rByte[0] = ColorPAL.read();
    if( rByte[0] == '$' ){
      for (int i=0; i<9; i++){
        rByte[i] = ColorPAL.read();
      }
      colorByte[0][colorNum] = hexChar2Num(rByte[0]) * 256 + hexChar2Num(rByte[1]) * 16 + hexChar2Num(rByte[2]);
      colorByte[1][colorNum] = hexChar2Num(rByte[3]) * 256 + hexChar2Num(rByte[4]) * 16 + hexChar2Num(rByte[5]);
      colorByte[2][colorNum] = hexChar2Num(rByte[6]) * 256 + hexChar2Num(rByte[7]) * 16 + hexChar2Num(rByte[8]);
      /*
      Serial.print(colorByte[0][colorNum]);
      Serial.print("\t");
      Serial.print(colorByte[1][colorNum]);
      Serial.print("\t");
      Serial.println(colorByte[2][colorNum]);
      */
      colorNum++;
    }

  }
}

//Check color call by checkBlock().
void checkColor(){
  int averageRGB[3] = {0,0,0};
  readColorArray();
  delay(5);
  //calculate average of the sampling RGBs.
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < COLORSIZE; j++){
      averageRGB[i]= averageRGB[i] + colorByte[i][j];
    }
    averageRGB[i] = averageRGB[i] / COLORSIZE;
  }
  //for debug
  /*
  Serial.print(averageRGB[0]);
  Serial.print("\t");
  Serial.print(averageRGB[1]);
  Serial.print("\t");
  Serial.println(averageRGB[2]);
  */
  //color category algorithm, implement based on the sampling datasheet - COLORSHEET.xlsx
  //file attached with the code.
  //the sensor lens edge to block top is less than 7mm.
  //see design document for more information.
  if(averageRGB[0] > averageRGB[1]){
    if(averageRGB[1] > averageRGB[2]){//RGB
      if(averageRGB[1] - averageRGB[2] > 5)
        Serial.println("yellow!");
      else{
        if(averageRGB[0] - averageRGB[1] > 70)
          Serial.println("orange!");
        else
          Serial.println("yellow!");
        }
    }
    else{
      if(averageRGB[0] > averageRGB[2]){//RBG
        if(averageRGB[0] - averageRGB[2] > 50)
          Serial.println("orange!");
        else{
          if(averageRGB[0] - averageRGB[2] < 10)
            Serial.println("brown!");
          else
            Serial.println("red!");
        }
      }
      else{//BRG
        if(averageRGB[2] - averageRGB[0] > 25)
          Serial.println("blue!");
        else{
          if(averageRGB[0] - averageRGB[1] > 7){
            if(averageRGB[0] > 11)
              Serial.println("brown!");
            else
              Serial.println("green!");
          }
          else{
            Serial.println("green!");
          }
        }
      }
    }
  }
  else{
    if(averageRGB[0] > averageRGB[1]){//GRB
      Serial.println("green!");
    }
    else{
      if(averageRGB[2] > averageRGB[1]){//BGR
        if(averageRGB[2] - averageRGB[1] > 30)
          Serial.println("blue!");
        else
          Serial.println("green!");
      }
      else//GBR
        Serial.println("green!");
    }
  }
}
