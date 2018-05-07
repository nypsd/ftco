/*

    2. Set threshold so that a message is printed when go above value

*/


int piezoPin = A0;
int ledPin = 7;

int tapThreshold = 700; // threshold for piezo

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
  Serial.println(piezoValue);

  // check if piezo has been tapped
  if (piezoValue > tapThreshold) {
    // print message
    Serial.println("above threshold");
  }

  // turn on LED
  digitalWrite(ledPin, HIGH);
}
