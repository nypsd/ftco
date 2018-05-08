/*
   Light Sensor Print

   Circuit: light dependent resistor on A0
*/

int sensorPin = A0; // variable for sensor pin

void setup() {

  // start the Serial communication
  Serial.begin(9600);

}

void loop() {
  // create a variable
  int sensorValue;

  // read in the value of the sensor and save
  //in the variable
  sensorValue = analogRead(A0);

  // print message to Serial Monitor
  Serial.println(sensorValue);

}
