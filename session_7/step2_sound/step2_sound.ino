/*
 * Sound
 * 
 * Circuit: speaker or piezo on pin 8
 *          Switch on pin 9
 */

#include "pitches.h" // use information in another file

int speakerPin = 8; // variable for speaker pin
int switchPin = 9; // variable for switch pin

// array of pitches to be played
int song[] = {
  NOTE_C3, NOTE_D3, NOTE_E3, NOTE_F3, NOTE_G3, NOTE_A4, NOTE_B4, NOTE_C4
};

int numNotes = 8; // number of notes in the song

// setup() will be called once at the beginning
void setup() {
  
    // set that the switch pin will be an input
  pinMode(switchPin, INPUT);

}

// loop() will be called repeatedly after setup() is done
void loop() {
  // read the value on the switch
  int switchValue = digitalRead(switchPin);

  // if the value is 1
  if(switchValue == 1) {
    // play the song note by note using a for loop
    for(int i=0; i<numNotes; i++) {
      // store the value stored in the array in a variable
      int note = song[i];

      // play the note using tone
      // first argument: the pin the speaker is connected to
      // second argument: the note to play
      // third argument: how long to play the note
      tone(speakerPin, note, 300);
      // pause long enough so the full note is played
      delay(300);
    }
  } 
}
