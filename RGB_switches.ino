void setup() 
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(8,OUTPUT);
}
void loop() 
{
  if(Serial.available()>0)
  {
    char c=Serial.read();
    if(c=='B')
    {
      Serial.println("LED ON");
      digitalWrite(13,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(8,HIGH);

    }
    if(c=='G')
    {
      Serial.println("LED ON");
      digitalWrite(13,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(8,HIGH);
    }
        if(c=='R')
    {
      Serial.println("LED ON");
      digitalWrite(13,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(8,LOW);
    }
    if(c=='b')
    {
      Serial.println("LED OFF");
      digitalWrite(13,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(8,LOW);
      
    }
        if(c=='g')
    {
      Serial.println("LED OFF");
      digitalWrite(13,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(8,LOW);
    }
        if(c=='r')
    {
      Serial.println("LED OFF");
      digitalWrite(13,LOW);
      digitalWrite(6,LOW);
      digitalWrite(8,HIGH);
    }
        if(c=='F' || c=='f')
    {
      Serial.println("LED OFF");
      digitalWrite(13,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(8,HIGH);
    }
  }
}
