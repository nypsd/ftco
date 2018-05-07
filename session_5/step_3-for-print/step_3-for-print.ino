/*
 * Pring For Loop
 * 
 */


void setup() {
  
  // start the Serial communication
  Serial.begin(9600);

}

void loop() {

  // for loop starting at 0 and going up to 254
  // i++ is a shorter way to write i = i + 1
  for(int i=0; i<255; i++) {
    
    // print out the value of i
    Serial.println("i");
    
    // pause
    delay(50);
  }
}
