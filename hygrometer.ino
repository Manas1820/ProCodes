//APOORV SINGH 19BEC0190
const int hygrometer = A0;  
// initialize analog pin A0 as an input.
int value;

void setup() {
  Serial.begin(9600);
}

void loop() {
  value = analogRead(hygrometer);          //Read value from sensor
  value = constrain(value, 400, 1023);     //Keep the range
  value = map(value, 400, 1023, 100, 0);   //Map 400 as 100 and 1023 as 0
  Serial.print("Soil humidity: ");         //Print onto serial window
  Serial.print(value);
  Serial.println('%');
  delay(2000);                             //delay for 2 seconds
}
