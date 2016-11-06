/* 
  Author: YOUR NAME
  School: YOUR SCHOOL
  Device Name: DEVICE NAME
  Date: THE DATE
  
  PURPOSE OF THE DEVICE GOES HERE
  
  INPUTS AND OUTPUT DESCRIPTION HERE
  
  HOW YOU USE THIS PROGRAM GOES HERE
  
  DESCRIBE HOW YOU WOULD IMPROVE THE DEVICE GIVEN MORE TIME HERE
  
  EXAMPLE FOR THIS DEVICE:
  
  NAME: Owen Brasier
  School: The University of Sydney
  Device Name: Generic Example
  
  The purpose of Generic Example is to give students of the MadMaker Challenge
  a starting point at which to begin their projects. It demonstrates reading
  a number of sensors, which are integers, and storing them in an array called
  esplora.
  
  There are 3 inputs for the device, the number of inputs can be defined by 
  setting the NUM_SENSORS variable to the number of senors being send.
  This example reads 3 sensors from the Esplora and prints the values to the
  canvas followed by a space.
  
  You can use this program by sending the correct data on the serial port from the 
  Esplora. The data must be integers on one line, separated by a comma. Example:
  
      x,y,z
      
  where x, y and z represent integers.
  
  Given more time, the Generic Program could be improved by making a project that
  does something a lot more interesting that just printing the sensor values on
  the canvas.
*/

// Number of sensors read from Esplora
int NUM_SENSORS = 3;

// save the sensors in an array called esplora
int esplora[] = new int[NUM_SENSORS];

void setup(){
  setupSerial();
  size(400,400);           // size of window
  fill(255);
  textSize(32);
  textAlign(CENTER, CENTER);
}

void draw(){
  background(0);
  String text = "";
  for(int i = 0; i < NUM_SENSORS; i++) {
    text += esplora[i] + " ";
  }
  text(text, width/2, height/2);
}