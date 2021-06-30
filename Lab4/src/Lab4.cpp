/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "d:/WindyCity_IOT/Labs/Lab4/src/Lab4.ino"
/*
 * Project Lab4
 * Description: Make LED turn on/off with button
 * Author: Arnav Sangamnerkar
 * Date: 06/30/2021
 */

void setup();
void loop();
#line 8 "d:/WindyCity_IOT/Labs/Lab4/src/Lab4.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  pinMode(D6, OUTPUT);
  pinMode(D7, INPUT);
}

// if button on, then turn light on, otherwise turn off
void loop() {
  // The core of your code will likely live here.
  bool value;
  // read button
  value = digitalRead(D7);
  
  if (value == true)
  {
    digitalWrite(D6, LOW);
  }
  else
  {
    digitalWrite(D6, HIGH);
  }
  //delay(400);
}