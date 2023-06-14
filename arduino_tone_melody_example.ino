
#include "pitches.h"

const byte chipA = 12;
const byte chipB = 11;
const byte chipC = 10;
const byte tempo = 60;

// notes in the MAIN melody (each note represents a 16th note, so two of the same note in a row will make one 8th note, etc.
short melodyA[] = {
  F4, F4, F4, F4, AS4, AS4, AS4, AS4, F4, F4, F4, F4, F4, F4, AS4, 0, AS4, C5, D5, DS5, F5, F5, F5, F5, F5, F5, F5, F5, F5, 0, F5, 0, F5, FS5, GS5, GS5, AS5, AS5, AS5, AS5, AS5, AS5, AS5, AS5, AS5, 0, AS5, 0, AS5, GS5, FS5, FS5, GS5, GS5, GS5, FS5, F5, F5, F5, F5, F5, F5, F5, F5
};

short melodyB[] = {
  
};

short melodyC[] = {
  
};

void setup() {
  // iterate over the notes of the melody:
  for (int i = 0; i < sizeof(melodyA)/2; i++) {
    
    tone(chipA, melodyA[i], 3750 / tempo);
    //tone(chipB, melodyB[i], 3750 / tempo);
    //tone(chipC, melodyC[i], 3750 / tempo);
    
    delay(3750 / tempo);
    
    // stop the tone playing:
    noTone(chipA);
    noTone(chipB);
    noTone(chipC);
  }
}

void loop() {
  // no need to repeat the melody.
}
