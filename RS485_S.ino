#include <SoftwareSerial.h>
SoftwareSerial RS485Serial(2,3); 
int data=123;

void setup()
{
  pinMode(1,OUTPUT);
  digitalWrite(1,LOW);
  RS485Serial.begin(9600);
}
void loop()
{
   digitalWrite(3,HIGH);
   RS485Serial.write(data);
    delay(500);
}

