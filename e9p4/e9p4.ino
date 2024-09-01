#include <Wire.h>
//************ Master *************
void setup() {
  Wire.begin();
}

void loop() {
  Wire.beginTransmission(8);
  Wire.write("University fo Phayao\n");
  Wire.endTransmission();

  delay(500); 
}

//********** Slave *************
// void setup(){
//   Wire.begin(8);
//   Wire.onReceive(recieveEvent);
// }
// void loop(){
//   delay(100); 
// }

// void recieveEvent(int a){
//   while(Wire.available()){
//     char c = Wire.read();
//     Serial.println(c);
//   }
//   digitalWrite(13,1);
//   delay(250);
//   digitalWrite(13,0);
//   delay(250);
// }