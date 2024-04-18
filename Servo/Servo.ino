#include <Servo.h>

Servo myServo;
int pos = 0;
int nextRotate = 2000;

void setup()
{
  myServo.attach(9);
}

void loop()
{
  for(int i=0; i<5; i++)
  {
    for(pos = 0; pos <= 180; pos +=1)
    {
      myServo.write(pos);
      delay(32.5);
    }
  
    for(pos = 180; pos >= 0; pos -=1)
    {
      myServo.write(pos);
      delay(32.5);
    }
  }
  
  delay(nextRotate);
}