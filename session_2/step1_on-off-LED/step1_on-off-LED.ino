/* On-Off LED Sketch
*  Circuit: resistor connected to Pin 7
*           LED long leg connected to resistor
*           LED short leg connected to GND
*/

// setup() is the label for the code between the { } 
// every Arduino sketch needs one (and only one)
// section with this label.
// The code in setup() will be run once right when the 
// Arduino turns on or starts running its code.

// 'void' in front of setup() and loop() means that once
// all the code has been run, there is nothing else
// that needs to be done.

void setup() { 
  // Need to say that the pin will send out current
  // as opposed to measuring the current coming in.
  // '7' is the pin we are talking about
  // note that 'OUTPUT' is all upper case letters
  pinMode(7, OUTPUT);

}

// loop() is the label for the code between { }
// every Arduino sketch needs one (and only one)
// section with this label.
// The code in loop() will first be run after setup()
// finishes and then run repeatedly until the Arduino
// is turned off
void loop() {
  // turn on the power at Pin 7
  digitalWrite(7, HIGH);

  // wait for 1000 ms (1 second)
  delay(1000);

  // turn off the power a Pin 7
  digitalWrite(7, LOW);

  // wait for 1000 ms (1 second)
  delay(1000);

}
