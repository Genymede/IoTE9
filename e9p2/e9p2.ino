#include <Wire.h>
//************ Reciever *************
void setup() {
  Wire.begin();
  Serial.begin(9600);
}

void loop() {
  Wire.requestFrom(8,6);
  while(Wire.available()){
    char c = Wire.read();
    Serial.print(c);
  }
  delay(500);
}

// // ********** Sender *************
// void setup(){
//   Wire.begin(8);
//   Wire.onRequest(requestEvent);
// }
// void loop(){
//   delay(500);
// }

// void requestEvent(){
//   Wire.write("University of Phayao\n");
// }