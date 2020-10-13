#include <IRremote.h>
// Create IR Send Object
IRsend irsend;
 
void setup()
{
  Serial.begin(9600);
  delay(2000);
  Serial.println("fm started")
  irsend.sendRC5(0xc11, 12);
  delay(1000);
  
  Serial.println("next |>");
  irsend.sendRC5(0xc11, 12);
  delay(1000);
  
  Serial.println("previous  <|");
  irsend.sendRC5(0xc11, 12);
  delay(1000);
  
  Serial.println("forward >>");
  irsend.sendRC5(0xc11, 12);
  delay(1000);
  
  Serial.println("backward <<");
  irsend.sendRC5(0xc11, 12);
  delay(1000);
  
  Serial.println("the end");
  irsend.sendRC5(0xc11, 12);
  delay(1000);

  delay(10);
}
 
void loop() {
  delay(10000);
}
