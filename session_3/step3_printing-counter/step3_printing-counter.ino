/*
 * Printing Serial Counter
 * 
 * Circuit: no external hardware
 */

int counter; // counter will hold a whole number

// setup() will be called once at the beginning
void setup() {
  // need to call this to start the Serial communication
  // 9600 is the speed of the data communication, always
  // use this number unless explicitily told to use a 
  // different one
  Serial.begin(9600);

  // set counter to first number
  counter = 1;

  // print message to Serial Monitor
  Serial.print("Counter starting at: ");
  Serial.println(counter);
  

}

// loop() will be called repeatedly after setup() is done
void loop() {
  // add 1 to the number in counter and save it back in counter
  counter = counter + 1;
  
  // print message to Serial Monitor
  Serial.print("Counter is now: ");
  Serial.println(counter);

  // pause for a little bit to slow down the printing
  delay(500);
}
