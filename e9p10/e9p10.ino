#include <Wire.h>
#include <rgb_lcd.h>
//**************** Master ****************
rgb_lcd lcd;

const int cR = 63;
const int cG = 109;
const int cB = 78;

void setup() {
  lcd.begin(16,2);
  lcd.setRGB(cR,cG,cB);
  lcd.print("Hello");
  delay(100); 
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("University of Phayao");
  lcd.setCursor(1,1);
  lcd.print("Bellie Norman");
  delay(100);
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