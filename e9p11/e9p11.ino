#include <Wire.h>
//**************** Master ****************
void setup() {
  Serial.begin(9600);
  while(!Serial){

  }
  Serial.println("Scanning IC2 port....");
  byte count = 0;
  byte i = 0;

  Wire.begin();
  for(i=8;i <120;i++){
    Wire.beginTransmission(i);
    if(!Wire.endTransmission())
      Serial.print("Found unit on address: ");
      Serial.println(i);
      count++;
      delay(1); 
  }
  Serial.print("Scanning Finish!!");
  Serial.print("Found ");
  Serial.print(count);
  Serial.println(" units");
}

void loop() {
  delay(100);
}