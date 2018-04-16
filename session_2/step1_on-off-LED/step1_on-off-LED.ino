/* On-Off LED Sketch
*   LED connected on Digital Pin 7
*/

// the code in setup() is run once
void setup() { 
  // Pin 7 will send out electricity
  pinMode(7, OUTPUT);

}


// the code in loop() will first be run after setup()
// finishes and then run repeatedly
void loop() {
  // turn on the power at Pin 7
  digitalWrite(7, HIGH);

  // wait for 2000 ms (2 seconds)
  delay(2000);

  // turn off the power at Pin 7
  digitalWrite(7, LOW);

  // wait for 1000 ms (1 second)
  delay(1000);

}
