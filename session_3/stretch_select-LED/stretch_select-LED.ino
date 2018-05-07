/*
 * Select LED With Potentiometer
 * 
 * Circuit: potentiometer on A0
 *          LED 1 and resistor on 7
 *          LED 2 and resistor on 8
 *          LED 3 and resistor on 9
 */

int potPin = A0; // variable for potentiometer pin
int ledPin1 = 7; // variable for LED 1 pin
int ledPin1 = 8; // variable for LED 2 pin
int ledPin1 = 9; // variable for LED 3 pin

// setup() will be called once at the beginning
void setup() {
  // need to call this to start the Serial communication
  // 9600 is the speed of the data communication, always
  // use this number unless explicitily told to use a 
  // different one
  Serial.begin(9600);

  // set that the LED pins will be all outputs
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);

}

// loop() will be called repeatedly after setup() is done
void loop() {
  // create a variable
  int potValue;

  // read in the value of the potentiometer and save 
  //in the variable
  potValue = analogRead(A0);
  
  // print message to Serial Monitor
  Serial.println(potValue);

  // check if the value is less than or equal to 100
  if( potValue <= 100 ){
      // turn off LED 2 and 3
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);

      // turn on LED 1
      digitalWrite(led1, HIGH);
  }
  // check if value is between 100 and 180
  if( 100 < potValue && potValue < 180) {
      // turn off LED 1 and 3
      digitalWrite(led1, LOW);
      digitalWrite(led3, LOW);

      // turn on LED 2
      digitalWrite(led2, HIGH);
  }
  // check if the value is greater than or equal to 180
  if( potValue > 180 ) {
      // turn off LED 1 and 2
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);

      // turn on LED 3
      digitalWrite(led3, HIGH);
  }
}
