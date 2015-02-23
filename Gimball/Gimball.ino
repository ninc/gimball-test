#include <Servo.h>

Servo servo1; 
Servo servo2; 

void setup() {
  //Attack servos to pin 8 & 9 on the arduino
  servo1.attach(8);
  servo2.attach(9);
}

void loop() {

  int angle;
  
  // Turn servos from 0 to 180 degrees
  for(angle = 0; angle < 180; angle += 1)
  {
    // Turn servos
    servo1.write(angle);
    servo2.write(angle);
    // Wait for hardware to move
    delay(15);                       
  } 
  // Turn servos from 180 to 0 degrees
  for(angle = 180; angle>=1; angle-=1)
  {         
    // Turn servos    
    servo1.write(angle);
    servo2.write(angle); 
    // Wait for hardware to move
    delay(15);
  } 
  
} 
