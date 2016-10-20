#include <SoftwareSerial.h>
SoftwareSerial RS485Serial(2,3); 
int data;

void setup()
{
  Serial.begin(9600);
  Serial.println("Komunikasi RS485 : ");
  pinMode(1,OUTPUT);
  digitalWrite(1,LOW);
  RS485Serial.begin(9600);
}
void loop()
{
  if (RS485Serial.available())
  {
    data = RS485Serial.read();
    Serial.println(data);
  }
}

