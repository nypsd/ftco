/*
   Recommended build order:
    1. Read in piezo and print to Serial Monitor
       Hard code turning on LED (to test circuit)
    2. Set threshold so that a message is printed when go above value
    3. Add debounce timer
    4. Turn on LED when above threshold using explicit writes
    5. Toggle LED using !ledState
    Stretch - potentiometer to set threshold
*/


int piezoPin = A0;
int ledPin = 9;
int ledState = LOW;

int tapThreshold = 700; // threshold for piezo
int tapDebounce = 30; // delay to stop multiple triggers

void setup() {
  // set up the pin modes
  // input for the piezo
  pinMode(piezoPin, INPUT);

  // output for the LED
  pinMode(ledPin, OUTPUT);

  // start Serial (for debugging)
  Serial.begin(9600);

}

void loop() {
  // read current value of piezo
  int piezoValue = analogRead(piezoPin);
  //Serial.println(piezoValue);

  // check if piezo has been tapped
  if (piezoValue > tapThreshold) {
    // print message
    Serial.println("above threshold");


    // if the LED was on, now turn it off
    ledState = !ledState;

    // pause to not trigger too many taps
    delay(tapDebounce);

  } 

  // set the LED to the LED value
  digitalWrite(ledPin, ledState);
}
