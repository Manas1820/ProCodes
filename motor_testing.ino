void setup()
{
Serial.begin(9600);
pinMode(9,OUTPUT);       //Pin No: 9, 11, 12, 13  are output pins
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
}

void loop()
{
  if(Serial.available()>0)
  {
    char c=Serial.read();
    if(c=='A' || c=='a')
    {
digitalWrite(9,LOW);     // anticlockwose
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);
digitalWrite(12,LOW);
    }
if(c=='W' || c=='w')
{
digitalWrite(9,HIGH);     // Forward
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
digitalWrite(12,LOW);
}
if(c=='D' || c=='d')
{
digitalWrite(9,HIGH);     // clockwise
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,HIGH);
}
if(c=='S' || c=='s')
{
digitalWrite(9,LOW);     // backward
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(12,HIGH);
}
if(c==' ' || c==' ')
{
digitalWrite(9,LOW);     // stop
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
}
  }
  }
