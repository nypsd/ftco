/*
 * Fade LED On and Off
 * 
 * Circuit: LED and resistors on 9, 10, 11
 */

int redPin = 9; // variable for red LED pin
int greenPin = 10; // variable for green LED pin
int bluePin = 11; // variable for blue LED pin

void setup() {
  // start the Serial communication
  Serial.begin(9600);

  // set that the LED pin will be an output
  pinMode(ledPin, OUTPUT);

}

void loop() {

  // for loop starting at 0 and going up to 254
  // i++ is a shorter way to write i = i + 1
  for(int i=0; i<255; i++) {
    // print out the value of i
    Serial.println("i");
    
    // set the output value between 0 and 255
    analogWrite(redPin, i);
    analogWrite(greenPin, 100);
    analogWrite(bluePin, 200);
    
    // pause
    delay(50);
  }
}
