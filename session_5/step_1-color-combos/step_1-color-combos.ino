/*
   Blink Different Colors LED On and Off

   Circuit: LED and resistors on 9, 10, 11
*/

int redPin = 9; // variable for red LED pin
int greenPin = 10; // variable for green LED pin
int bluePin = 11; // variable for blue LED pin

void setup() {

  // set that the LED pin will be an output
  pinMode(ledPin, OUTPUT);

}

void loop() {

  // turn on and off different color combinations
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);

  // pause
  delay(1000);

  // turn on and off different color combinations
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
}
