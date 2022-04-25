#include <Servo.h>
Servo s1,s2,s3,s4;
const int pinoServo1 = 5;
const int pinoServo2 = 6;
const int pinoServo3 = 9;
const int pinoServo4 = 10;

void setup() {
  
  s1.attach(pinoServo1);
   s2.attach(pinoServo2);
    s3.attach(pinoServo3);
     s4.attach(pinoServo4);
  s1.write(0);
}

void loop() {
  for(int pos = 0; pos < 180; pos++){
  s1.write(pos);
  s2.write(pos);
  s3.write(pos);
  s4.write(pos);
  delay(15);
  }
}
