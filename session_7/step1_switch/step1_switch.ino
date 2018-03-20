/*
 * Switch LED On and Off
 * 
 * Circuit: LED and resistor on 7
 *          Switch on pin 8
 */

int ledPin = 7; // variable for LED pin
int switchPin = 8; // variable for switch pin

// setup() will be called once at the beginning
void setup() {
  // call this to start the Serial communication
  Serial.begin(9600);

  // set that the LED pin will be an output
  pinMode(ledPin, OUTPUT);

    // set that the switch pin will be an output
  pinMode(switchPin, INPUT);

}

// loop() will be called repeatedly after setup() is done
void loop() {
  // read the value on the switch
  int switchValue = digitalRead(switchPin);

  // if the value is 1
  if(LED == 1) {
    // turn on the LED 
    digitalWrite(ledPin, HIGH);
  } else {
    // turn off the LED (the value is 0)
    digitalWriate(ledPin, LOW);
  }
   
}
