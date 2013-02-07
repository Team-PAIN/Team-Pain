/*====================================================
/ Connect ColorPAL SIG signal to Arduino pin 2 and 3
/ Baud Rate = 9600 kbps
/ Works with Arduino 0.20, not with 1.00 and above?
/====================================================*/

#include <SoftwareSerial.h>

SoftwareSerial ColorPAL(2, 3); // rx = 2, tx = 3

int red, grn, blu;

int gotcolor = 0;
int letter;

char colorByte[9];

void setup(){

  // for colordemo 9600,
Serial.begin(9600); // Start communication with serial port read value
ColorPAL.begin(4800); // Send signal to led to read value

pinMode(2,INPUT); // serial pin out from color pal
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
delay(100);


  delay(20);
  ColorPAL.begin(4800);
  ColorPAL.print("= (00 $ m) !"); // set up loop to continuously send color data
  pinMode(3,INPUT);


}

// This oscillates back and forth on one wire to turn off led, send signal,
// turn on led, read signal. very fast strobe read - arduino is not capable of
// one wire signal communication over digital ports, so this is a way around
// that over 2 wires communicating with 1 pin on the sensor.
//---------------------------------

void loop()
{

  readColor();
  gotcolor = 0;
  delay(100);

}  /* End of loop()  */


/* ***************************************** */
/* Function readColor()                      */
/* Reads ColorPAL, putting results in the    */
/*       red, grn, blu variables             */
/* ***************************************** */
void readColor()
{
  char rByte[9];
  char dummy[4];

//  delay(20);
//  ColorPAL.begin(4800);
//  ColorPAL.print("= (00 $ m) !"); // set up loop to continuously send color data

  pinMode(3,INPUT);
  gotcolor = 0;
  while (gotcolor == 0)
   {
     rByte[0] = ColorPAL.read();
     if( rByte[0] == '$' )
      {
       gotcolor = 1;
       for (int i=0; i<9; i++)
          {
           rByte[i] = ColorPAL.read();
          }

     Serial.print("R0");
     Serial.print(rByte[0]);
     Serial.print(rByte[1]);
     Serial.print(rByte[2]);
     Serial.print(" G0");
     Serial.print(rByte[3]);
     Serial.print(rByte[4]);
     Serial.print(rByte[5]);
     Serial.print(" B0");
     Serial.print(rByte[6]);
     Serial.print(rByte[7]);
     Serial.print(rByte[8]);
     Serial.println();     

    }
   }
}  /* End of function readColor() */
