/*
 * Mulitple Blinking 
 * 
 * Circuit: Red LED on Pin 8
 *          Yellow LED on Pin 9
 *          Green LED on Pin 10
 *          All with their own current limiting resistors
 */

int redLed = 8;
int yellowLed = 9;
int greenLed = 10;

// setup() will be called once at the beginning
void setup() {
  // set that each of the pins will be outputs
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);

}

// loop() will be called repeatedly after setup() is done
void loop() {
  // turn on LEDs
  digitalWrite(redLed, HIGH);
  digitalWrite(yellowLed, HIGH);
  digitalWrite(greenLed, HIGH);
  // wait
  delay(2000);
  
  // turn off LEDs
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, LOW); 
  // wait
  delay(500);

}
