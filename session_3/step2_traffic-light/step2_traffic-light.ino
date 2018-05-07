/*
 * Traffic Light 
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
  // turn off red
  digitalWrite(redLed, LOW);
  // turn on green
  digitalWrite(greenLed, HIGH);
  // wait
  delay(2000);
  
  // turn off green
  digitalWrite(greenLed, LOW);
  // turn on yellow
  digitalWrite(yellowLed, HIGH);  
  // wait
  delay(500);
  
  // turn off yellow
  digitalWrite(yellowLed, LOW);
  // turn on red
  digitalWrite(redLed, HIGH);
  // wait
  delay(2000);

}
