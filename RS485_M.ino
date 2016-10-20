#include <SoftwareSerial.h>
SoftwareSerial mySerial(3,2);
int data;
void setup() {
  Serial.begin(9600);
  Serial.println("Komunikasi RS485 : ");
  pinMode(1,OUTPUT);
  digitalWrite(1,LOW);
  mySerial.begin(9600);
}
 
void loop() {
  if(mySerial.available() > 0)
  {
data = mySerial.read();
    Serial.write(data);
  }
}
