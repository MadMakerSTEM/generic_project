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
 * 
 * EXAMPLE FOR THIS DEVICE:
 * 
 * Name: Owen Brasier
 * School: The University of Sydney
 * 
 * Device Name: Generic Example
 * 
 * The purpose of this device is to demonstrate sending sensor values 
 * on the Arduino Esplora to the serial port, to be read in Processing.
 * 
 * The device reads from three sensors - the slider, temperature sensor
 * and joystickX, and then uses the Serial.print statements to send the
 * values to the serial monitor, with a comma in between each value.
 * 
 * An example output looks like:
 * 
 *     1023,20,5
 *     
 * Representing the integer values of the slider, temperature sensor and 
 * joystick respectively.
 * 
 * To use this device, load this program onto and Arduino Esplora, then
 * run the accompanying Processing program in order to see the results. The
 * user can then maniupulate the input sensors in order to affect the display
 * printed in Processing.
 * 
 * Given more time, this device could be improved by adding the Esplora led,
 * in order to fulfil the minimum requirements specified in the Challenge
 * Outline. But since the Esplora is mainly as a data-gathering device,
 * the improvements are best spent by imporoving the Processing program.
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
