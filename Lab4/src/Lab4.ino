/*
 * Project Lab4
 * Description: Make LED turn on/off with button
 * Author: Arnav Sangamnerkar
 * Date: 06/30/2021
 */

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
 
}