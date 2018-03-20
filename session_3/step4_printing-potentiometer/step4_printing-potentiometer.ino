/*
 * Printing Potentiometer
 * 
 * Circuit: potentiometer on A0
 */

// setup() will be called once at the beginning
void setup() {
  // need to call this to start the Serial communication
  // 9600 is the speed of the data communication, always
  // use this number unless explicitily told to use a 
  // different one
  Serial.begin(9600);

}

// loop() will be called repeatedly after setup() is done
void loop() {
  // create a variable
  int potValue;

  // read in the value of the potentiometer and save in
  // the variable
  potValue = analogRead(A0);
  
  // print message to Serial Monitor
  Serial.println(potValue);

  // pause for a little bit to slow down the printing
  delay(500);
}
