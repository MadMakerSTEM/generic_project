/* 

  Author: YOUR NAME
  School: YOUR SCHOOL
  Device Name: DEVICE NAME
  Date: THE DATE
  
  PURPOSE OF THE DEVICE GOES HERE
  
  INPUTS AND OUTPUT DESCRIPTION HERE
  
  HOW YOU USE THIS PROGRAM GOES HERE
  
  DESCRIBE HOW YOU WOULD IMPROVE THE DEVICE GIVEN MORE TIME HERE
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