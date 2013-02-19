/*=========================================================================================
/ Block Identification Subsystem - communication test code
/ Working with Arduino MEGA
/ FPGA synchronized communication CLK(4) DAT(5) and RESET (6).
/ ========================================================================================
/ Modified by Wing Wang for CEC420 - Senior Design Team 2 Block Identification Subsystem
/=========================================================================================*/


#define RED 0
#define ORANGE 1
#define YELLOW 2
#define GREEN 3
#define BLUE 4
#define BROWN 5
#define AIR 0
#define SEA 1
#define RAIL 2
#define SENDDELAY 1
#define DELAY 5000


void setup(){
  Serial.begin(9600); // Start communication with serial port, send the results to the computer.
  //setup FPGA communication
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  reset();
}

//main loop function - call by Arduino periodically
void loop(){

  Serial.println("B1");
  synFPGA(0, 0);
  delay(DELAY);
  Serial.println("B2");
  synFPGA(1, 0);
  delay(DELAY);
  Serial.println("B3");
  synFPGA(0, 1);
  delay(DELAY);
  Serial.println("B4");
  synFPGA(2, 0);
  delay(DELAY);
  Serial.println("B5");
  synFPGA(0, 2);
  delay(DELAY);
  Serial.println("B6");
  synFPGA(15, 15);
  delay(DELAY);
  reset();

}  /* End of loop()  */

void reset(){
  Serial.println("RE");
  digitalWrite(6,HIGH);
  delay(1);
  digitalWrite(6,LOW);
}

//sending block information to FPGA (4 CLK, 5 DAT)
void synFPGA(int sendSize, int sendColor){
  char sendData = (sendSize<<4) + sendColor;
  Serial.print("sendSize:");
  Serial.println(sendSize);
  Serial.print("sendColor:");
  Serial.println(sendColor);
  Serial.print("sendData:");
  Serial.println(sendData);
  reset();
  sendChar(sendData, 5, 4);
}

void sendChar(char sendData, int datPin, int clkPin){
  Serial.println("dat start");
  for(int i = 0; i < 8; i++){
    delay(SENDDELAY);
    if((sendData&1) == 1){
      Serial.print("1");
      digitalWrite(datPin,HIGH);
      delay(1);
      digitalWrite(clkPin,HIGH);
      delay(1);
      digitalWrite(clkPin,LOW);
      //digitalWrite(datPin,LOW);
      delay(1);
    }
    else{
      Serial.print("0");
      digitalWrite(datPin,LOW);
      delay(1);
      digitalWrite(clkPin,HIGH);
      delay(1);
      digitalWrite(clkPin,LOW);
      //digitalWrite(datPin,LOW);
      delay(1);
    }
    sendData = sendData>>1;
  }
  Serial.println("");
}
