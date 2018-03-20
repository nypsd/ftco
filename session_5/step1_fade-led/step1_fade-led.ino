/*
 * Fade LED On and Off
 * 
 * Circuit: LED and resistor on 7
 */

int ledPin = 7; // variable for LED pin

// setup() will be called once at the beginning
void setup() {
  // need to call this to start the Serial communication
  // 9600 is the speed of the data communication, always
  // use this number unless explicitily told to use a 
  // different one
  Serial.begin(9600);

  // set that the LED pin will be an output
  pinMode(ledPin, OUTPUT);

}

// loop() will be called repeatedly after setup() is done
void loop() {

  // for loop starting at 0 and going up to 254
  // i++ is a shorter way to write i = i + 1
  for(int i=0; i<255; i++) {
    // print out the value of i
    Serial.println("i");
    
    // set the output value between 0 and 255
    analogWrite(ledPin, i);
    // pause
    delay(50);
  }
}
