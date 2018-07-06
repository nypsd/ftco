/*
 * Control DC Motor
 * 
 * Circuit: motor, transitor and diode on Pin 9
 *          potentiometer on A0
 */

int motorPin = 9; // variable for LED pin

// setup() will be called once at the beginning
void setup() {

  // set that the motor pin will be an output
  pinMode(motorPin, OUTPUT);

}

// loop() will be called repeatedly after setup() is done
void loop() {

  // turn on the motor
  digitalWrite(motorPin, HIGH);
  delay(2000);

  // turn off the motor
  digitalWrite(motorPin, LOW);
  delay(3000);
  
}
