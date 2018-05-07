/*
 * Ifs With Potentiometer
 * 
 * Circuit: potentiometer on A0
 *          LED and resistor on 7
 */

int potPin = A0; // variable for potentiometer pin
int ledPin = 7; // variable for LED pin
int ledValue = 0; // variable for whether LED is on

// setup() will be called once at the beginning
void setup() {
  // start the Serial communication
  Serial.begin(9600);

  // set that the LED pin will be an output
  pinMode(ledPin, OUTPUT);

}

// loop() will be called repeatedly after setup() is done
void loop() {
  // create a variable
  int potValue;

  // read in the value of the potentiometer and save 
  //in the variable
  potValue = analogRead(A0);

  // start with the LED value being set to off
  ledValue = 0;
  
  // print message to Serial Monitor
  Serial.println(potValue);

  // check if the value is above a number
  if( potValue > 150 ){
    // print a message
    Serial.println("above!");

    // set variable to turn on LED
    ledValue = 1;
  }

  // set LED to on or off according to variable
  digitalWrite(ledPin, ledValue);
}
