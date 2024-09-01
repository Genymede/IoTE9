#include <Wire.h>
//************ Master *************
void setup() {
  Wire.begin();
}

char message[3][22] = {"University of Phayao\n","computer Engineering\n","Jirawat Janjobtam"};

void loop() {
  int j = 0;
  for(int i=8;i<11;i++){
    Serial.print("Send message to slave: ");
    Serial.println(i);
    Serial.print(message[j]);

    Wire.beginTransmission(i);
    Wire.write(message[j]);
    Wire.endTransmission();
    
    j++;
    delay(500);
  }
  
}

//********** Slave *************
// void setup(){
//   Wire.begin(8); //8-10
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