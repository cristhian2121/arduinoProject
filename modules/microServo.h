#include <Servo.h>

Servo myservo;
int value = 0;

void configMicroServo(int pinPWD = 9)
{
  myservo.attach(pinPWD);
}

void rotateMicroServo(int position = 0)
{
  if (position < 0 || position > 180)
  {
    return;
  }
  myservo.write(position);
  delay(50);
}