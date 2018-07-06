/*
    4. Turn on LED when above threshold using explicit
       writes
*/


int piezoPin = A0;
int ledPin = 9;

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

    // turn on LED
    digitalWrite(ledPin, HIGH);

    // pause to not trigger too many taps
    delay(tapDebounce);
  }
    // turn off LED
    digitalWrite(ledPin, LOW);
}
