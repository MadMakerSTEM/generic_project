/*
 * YOUR NAME
 * YOUR SCHOOL
 * 
 * DEVICE NAME
 * 
 * DEVICE PURPOSE 
 * 
 * DESCRIBE WHAT THE INPUTS ARE HERE
 * 
 * HOW TO USE YOUR DEVICE - FULL INSTRUCTIONS PLEASE
 * 
 * HOW WOULD YOU IMPROVE THIS DEVICE GIVEN MORE TIME?
 * 
 */


#include <Esplora.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  // read from sensors
  int slider = Esplora.readSlider();        
  int temp = Esplora.readTemperature(DEGREES_C);
  int joystick = Esplora.readJoystickX();

  // print all sensors to Serial monitor on 1 line with a comma in between
  Serial.print(slider);
  Serial.print(",");
  Serial.print(temp);
  Serial.print(",");
  Serial.print(joystick);
  Serial.println();  
  delay(20);
}
