#include <Servo.h>

Servo servoMotor;


void setup()
{
  servoMotor.attach(9);
  servoMotor.write(0);
  
  Serial.begin(9600);
  
}

void loop()
{
  for(int i=0 ; i<=180 ; i++)
  {
    servoMotor.write(i);
    Serial.println(i);
    delay(15);
  }
  
  for(int i=180; i>=0 ; i--)
  {
    servoMotor.write(i);
    Serial.println(i);
    delay(15);
  }
}
