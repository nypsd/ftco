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

  // potValue will be a value from 0 to 1023
  // but analogWrite needs a value 0 to 255
  // the map() function will scale or map our potValue
  // to this range for us
  // first argument: the number we want to scale
  // second and third arguments: orginal min and max for potValue
  // fourth and fifth arguments: new min and max
  int scaledPotValue = map(potValue, 0, 1023, 0, 255);

  // print so we can see what is happening
  Serial.print("Original value: ");
  Serial.print(potValue);
  Serial.print(" Mapped value: ");
  Serial.println(scaledPotValue);

  // turn on the motor
  analogWrite(motorPin, scaledPotValue);
  
}
