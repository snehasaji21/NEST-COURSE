int ledpin=5;
int ldrpin=6;
float ldrstate=0;
float thr=90;
void setup() {
  pinMode(ledpin,OUTPUT);
  pinMode(ldrpin,INPUT);

}

void loop() {
  ldrstate=digitalRead(ldrpin);
  if (ldrstate>thr)
  {
    digitalWrite(ledpin,HIGH);
  }
  else{
    digitalWrite(ledpin,LOW);
  }
  
}
