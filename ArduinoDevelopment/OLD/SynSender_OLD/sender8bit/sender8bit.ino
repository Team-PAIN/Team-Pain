const int sdata = 9;
const int sclk = 8;
char data = 255;
char temp;
char mask = 1;
int sendCoun;

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
  sending();
  delay(1000);
}

void sending(){
  Serial.print("output: ");
  Serial.print(data);
  Serial.print("\n");
  
  //for data reviewing test only
  Serial.print("in binary: ");
  for(sendCoun = 0; sendCoun < 8; sendCoun++){
    temp = data >> sendCoun;
    temp = temp & mask;
    Serial.print((int)temp);
  }
  Serial.print("\n");
  //could be delete after test
  
  //sending
  for(sendCoun = 0; sendCoun < 8; sendCoun++){
    temp = data >> sendCoun;
    temp = temp & mask;
    if(temp == 1){
      digitalWrite(sdata, HIGH);
      Serial.print("data line: high\n");
    }
    else{
      digitalWrite(sdata, LOW);
      Serial.print("data line: low\n");
    }
    //clock
    digitalWrite(sclk, HIGH);
    Serial.print("clk line: high\n");
    delayMicroseconds(5);
    digitalWrite(sclk, LOW);
    Serial.print("clk line: low\n");
    delayMicroseconds(2);
    
    //for test delay
    //delay(1000);
    Serial.print("\n");
    //for test delay end
  }

  
}

