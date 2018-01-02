#include "pitches.h"
 
//음계 데이터 (24개)
int melody[] = {NOTE_G7,NOTE_G7,NOTE_A7,NOTE_A7,NOTE_G7,
                NOTE_G7,NOTE_E7,NOTE_G7,NOTE_G7,NOTE_E7,
                NOTE_E7,NOTE_D7,NOTE_G7,NOTE_G7,NOTE_A7,
                NOTE_A7,NOTE_G7,NOTE_G7,NOTE_E7,NOTE_G7,
                NOTE_E7,NOTE_D7,NOTE_E7,NOTE_C7};
//음의길이, 4:4분음표, 2:2분음표
int noteDurations[] = {4,4,4,4,4,4,2,4,4,4,4,1,4,4,4,4,4,4,2,4,4,4,4,1};
 
void setup() {
  for (int thisNote = 0; thisNote < 24; thisNote++)
  {
    int noteDuration = 800 / noteDurations[thisNote];
    tone(D7, melody[thisNote], noteDuration); 
    int pauseBetweenNotes = noteDuration * 1.30;      
    delay(pauseBetweenNotes);                         //delay
   if(thisNote==23)
    noTone(D7);                               
  }
}
 
void loop() {
}

