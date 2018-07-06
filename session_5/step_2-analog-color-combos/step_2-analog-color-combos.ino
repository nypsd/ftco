/*
   Blink Different Colors LED On and Off
   Circuit: LED and resistors on 9, 10, 11
*/

int greenPin = 11; // variable for green LED pin
int bluePin = 10; // variable for blue LED pin
int redPin = 9; // variable for red LED pin

void setup() {
  // set that the LED pin will be an output
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

}

void loop() {

  // turn on and off different color combinations
  analogWrite(redPin, 0);
  analogWrite(greenPin, 200);
  analogWrite(bluePin, 255);
  // pause
  delay(1000);

  // turn on and off different color combinations
  analogWrite(redPin, 190);
  analogWrite(greenPin, 50);
  analogWrite(bluePin, 150);
  //pause
  delay(1000); 
}
