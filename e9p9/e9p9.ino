#include <Wire.h>
//**************** Master ****************
byte x = 0;
void setup() {
  Wire.begin();
  Serial.begin(9600); 
}

void loop() {
  int a = 0;
  a = analogRead(A0);
  x = map(a,0,4095,0,180);
  Serial.println(x);
  
  Wire.beginTransmission(10);
  Wire.write(x);
  Wire.endTransmission();
  delay(10);
}

// //**************** Slave ****************
// #include <Servo.h>
// Servo myServo;
// void setup() {
//   myServo.attach(9);
//   Wire.begin(10);
//   Wire.onReceive(recieveEvent);
//   Serial.begin(9600); 
// }

// void loop() {
//   delay(100);
// }

// void recieveEvent(int a){
//   a = Wire.read();  
//   myServo.write(a); 
//   Serial.println(a);
// }