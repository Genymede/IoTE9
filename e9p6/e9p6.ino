#include <Wire.h>
//************ Master *************
void setup() {
  Wire.begin();
}

void loop() {
  int a=0,b=0,c=0;
  a = digitalRead(A0);
  b = digitalRead(A1);
  c = digitalRead(A2);
  
  if(a){
    Serial.println("Send message to slave: 8");
    Serial.print("University of Phayao\n");

    Wire.beginTransmission(8);
    Wire.write("University of Phayao\n");
    Wire.endTransmission();
    delay(500);
  }
  if(b){
    Serial.println("Send message to slave: 9");
    Serial.print("computer Engineering\n");

    Wire.beginTransmission(9);
    Wire.write("computer Engineering\n");
    Wire.endTransmission();
    delay(500);
  }
  if(c){
    Serial.println("Send message to slave: 10");
    Serial.print("Jirawat Janjobtam");

    Wire.beginTransmission(10);
    Wire.write("Jirawat Janjobtam");
    Wire.endTransmission();
    delay(500);
  }
    
  
}

//********** Slave *************
// void setup(){
//   Wire.begin(8); //8-10
//   Wire.onReceive(recieveEvent);
//   pinMode(13,OUTPUT);
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