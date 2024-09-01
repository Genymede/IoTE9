#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

#define SERVOMIN  150 // This is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  600 // This is the 'maximum' pulse length count (out of 4096)
#define USMIN  600 // This is the rounded 'minimum' microsecond length based on the minimum pulse of 150
#define USMAX  2400 // This is the rounded 'maximum' microsecond length based on the maximum pulse of 600
#define SERVO_FREQ 50 // Analog servos run at ~50 Hz updates

void setup() {
  Serial.begin(9600);
  Serial.println("8 channel Servo test!");

  pwm.begin();
  pwm.setOscillatorFrequency(27000000);
  pwm.setPWMFreq(SERVO_FREQ);  // Analog servos run at ~50 Hz updates

  delay(10);
}
int port[] = {0,4,15};
void loop() {
  for(int i=0;i<3;i++){
    pwm.setPWM(port[i], 0, ang2pu(0)); 
    delay(500);
    pwm.setPWM(port[i], 0, ang2pu(45)); 
    delay(500);
    pwm.setPWM(port[i], 0, ang2pu(90)); 
    delay(500);
    pwm.setPWM(port[i], 0, ang2pu(135 )); 
    delay(500);
    pwm.setPWM(port[i], 0, ang2pu(180)); 
    delay(500);
  }
}

int ang2pu(int ang){
  return map(ang,0,180,118,500);
}
