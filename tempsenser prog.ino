const int tempin=A0;
const int buzzerpin=8;
const float tempth=1.0;
void setup() {
  Serial.begin(9600);
  pinMode(buzzerpin,OUTPUT);
  digitalWrite(buzzerpin,LOW);
  

}

void loop() {
  int sensorvalue=analogRead(tempin);
  float temp=sensorvalue*(3.0/10230)*10;
  Serial.print("Temperature");
  Serial.print(temp);
  Serial.print("C");
  if(temp<tempth)
  {
    digitalWrite(buzzerpin,HIGH);
    
  }
  else
  {
    digitalWrite(buzzerpin,LOW);
  }
  delay(1000);
}