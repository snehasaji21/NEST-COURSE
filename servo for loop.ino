#include <Servo.h>
Servo myServo;
const int servopin=9;

void setup() {
  myServo.attach(servopin);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0;i<=180;i++)
  {
   myServo.write(i);
    delay(15);}
   for (int i=180;i>=0;i--)
  {
   myServo.write(i);
   delay(15);
  }
  
}