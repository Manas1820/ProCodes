#include <SoftwareSerial.h>

SoftwareSerial BT(2, 3); //Rx, Tx respectively
String readdata;

void setup() 
{
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() 
{
  while(BT.available())      //Check if there is an available byte to read
  {  
    delay(10);                  //Delay added to make thing stable
    char c = BT.read();         //Conduct a serial read
    readdata += c;              //build the string- "forward", "reverse", "left" and "right"
  } 
  if (readdata.length() > 0) 
  {
    Serial.println(readdata);
    if(readdata == "F")
  {
      Serial.println("LED ON");
      digitalWrite(13,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(8,LOW);
    delay(100);
  }
  else if(readdata == "B")
  {
      Serial.println("LED ON");
      digitalWrite(13,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(8,HIGH);
    delay(100);
  }
  else if (readdata == "R")
  {
      Serial.println("LED ON");
      digitalWrite(13,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(8,HIGH);
    delay (100);
  }
 else if ( readdata == "L")
 {
      Serial.println("LED ON");
      digitalWrite(13,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(8,LOW);
   delay (100);
 }

 else if (readdata == "S")
 {
      Serial.println("LED ON");
      digitalWrite(13,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(8,LOW);
   delay (100);
 }
readdata="";        //Reset the variable
}
} 
