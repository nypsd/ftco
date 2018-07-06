/*
    1. Read in piezo and print to Serial Monitor
       Hard code turning on LED (to test circuit)

*/


int piezoPin = A0;
int ledPin = 9;


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

  // turn on LED
  digitalWrite(ledPin, HIGH);
}
