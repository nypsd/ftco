/*
 * Control DC Motor
 * 
 * Circuit: motor, transitor and diode on Pin 9
 *          potentiometer on A0
 */

int motorPin = 9; // variable for motor pin
int potPin = A0; // variable for the potentiometer

void setup() {
  // start the Serial communication
  Serial.begin(9600);

  // set that the motor pin will be an output
  pinMode(motorPin, OUTPUT);

}

void loop() {

  // read in the value of the potentiometer
  int potValue = analogRead(potPin);

  Serial.println(potValue);

  // turn on the motor
  digitalWrite(motorPin, HIGH);
  delay(2000);

  // turn off the motor
  digitalWrite(motorPin, HIGH);
  delay(3000);
  
}
