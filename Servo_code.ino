
#include <Servo.h>

Servo servo11; 
Servo servo10;
  
int pos = 0;    // variable for storing servo position

void setup() {
  servo11.attach(11);  // attaches the pin 10 servo to the servo object
servo10.attach(10);
}



void loop() {
 
  servo11. write(0);
  delay(1500);
  servo11. write(180);
  delay(2000);
  
  servo10. write(0);
  delay(1500);
  servo10. write(180);
  delay(2000);
  
}
  