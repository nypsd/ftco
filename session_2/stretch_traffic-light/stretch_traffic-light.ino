/*
 * Traffic Light Stretch Challenge 
 * 
 * Circuit: Red LED on Pin 8
 *          Yellow LED on Pin 9
 *          Green LED on Pin 10
 *          All with their own current limiting resistors
 */

// setup() will be called once at the beginning
void setup() {
  // set that each of the pins will be outputs
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

}

// loop() will be called repeatedly after setup() is done
void loop() {
  // turn off red
  digitalWrite(8, LOW);
  // turn on green
  digitalWrite(10, HIGH);
  // wait
  delay(2000);
  
  // turn off green
  digitalWrite(10, LOW);
  // turn on yellow
  digitalWrite(9, HIGH);  
  // wait
  delay(500);
  
  // turn off yellow
  digitalWrite(9, LOW);
  // turn on red
  digitalWrite(8, HIGH);
  // wait
  delay(2000);

}
