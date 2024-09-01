#include <Wire.h>
//************ Master *************
void setup() {
  Wire.begin();
  Serial.begin(9600);
}

void loop() {
  for(int i=8;i<11;i++){
    Wire.requestFrom(i,21);
    while(Wire.available()){
      char c = Wire.read();
      Serial.print("Recieve from slave number: ");
      Serial.println(i);
      Serial.print(c);
      Serial.println("------------");
    }
    delay(500); 
    Serial.println("=================================");
  }
}

// ********** Slave *************
// // -----No.8---------
// void setup(){
//   Wire.begin(8);
//   Wire.onRequest(requestEvent);
// }
// void loop(){
//   delay(100);
// }

// void requestEvent(){
//   Wire.write("Hello from 8\n");
// }

// // -----No.9---------
// void setup(){
//   Wire.begin(9);
//   Wire.onRequest(requestEvent);
// }
// void loop(){
//   delay(100);
// }

// void requestEvent(){
//   Wire.write("Computer Engineer\n");
// }

// // -----No.10---------
// void setup(){
//   Wire.begin(10);
//   Wire.onRequest(requestEvent);
// }
// void loop(){
//   delay(100);
// }

// void requestEvent(){
//   Wire.write("Jirawat Janjobtam\n");
// }