/*
 * Printing Serial
 * 
 * Circuit: no external hardware
 */

// setup() will be called once at the beginning
void setup() {
  // need to call this to start the Serial communication
  // 9600 is the speed of the data communication, always
  // use this number unless explicitily told to use a 
  // different one
  Serial.begin(9600);

  // print message to Serial Monitor
  Serial.println("Hello from setup!");

}

// loop() will be called repeatedly after setup() is done
void loop() {
  // print message to Serial Monitor
  Serial.println("Hello from looop!");

  // this message doesn't have a 'new line' at the end
  Serial.print("and again...");

  // this one does have a 'new line'
  Serial.println("hello!");


  // pause for a little bit to slow down the printing
  delay(500);
}
