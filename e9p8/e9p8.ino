#include <Wire.h>
//************ Master *************
byte x = 0;
void setup() {
  Wire.begin();
  Serial.begin(9600); 
}

void loop() {
  Serial.println("Send message to slave: 8");
  Serial.println(x);

  Wire.beginTransmission(8);
  Wire.write(x);
  Wire.endTransmission();

  x = analogRead(A0);

  delay(500);
  
}

//********** Slave *************
// void setup(){
//   Wire.begin(8); //8-10
//   Wire.onReceive(recieveEvent);
//   pinMode(13,OUTPUT);
//   Serial.begin(9600);
// }
// void loop(){
//   delay(100); 
// }

// void recieveEvent(int x){
//   int a = 0;
//   a = Wire.read();
//   Serial.println(a);

//   analogWrite(13,a);
// }