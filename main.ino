#include "pitches.h"

//Bip number
int bip1 = 8;

//Intervals
int far = 2000;
int longo = 2000;
int medio = 1000;
int curto = 500;
int small = 300;


void setup() {

  pinMode(bip1,OUTPUT);

}

void loop() {

  starWars();
  
}

//Music
void starWars(){
  tone(bip1,NOTE_D5,2000);
  delay(3000);
  
  tone(bip1,NOTE_D3,small);
  delay(small);
  tone(bip1,NOTE_D3,small);
  delay(small);
  tone(bip1,NOTE_D3,small);
  delay(small);
  
  tone(bip1,NOTE_G3,longo);
  delay(longo);
  
  tone(bip1,NOTE_D4,longo);
  delay(longo);
  
  tone(bip1,NOTE_C4,small);
  delay(small);
  tone(bip1,NOTE_B3,small);
  delay(small);
  tone(bip1,NOTE_A3,small);
  delay(small);

  tone(bip1,NOTE_G4,longo);
  delay(longo);

  tone(bip1,NOTE_D4,longo);
  delay(longo);
  
  tone(bip1,NOTE_C4,curto);
  delay(small);
  tone(bip1,NOTE_B3,curto);
  delay(small);
  tone(bip1,NOTE_A3,curto);
  delay(small);
  
  tone(bip1,NOTE_G3,longo);
  delay(longo);
  
  tone(bip1,NOTE_D3,longo);
  delay(longo);
  
  tone(bip1,NOTE_C4,curto);
  delay(small);
  tone(bip1,NOTE_B3,curto);
  delay(small);
  tone(bip1,NOTE_C4,curto);
  delay(small);
  
  tone(bip1,NOTE_A3,longo);
  delay(longo);
  
  tone(bip1,NOTE_D3,longo);
  delay(small);
  tone(bip1,NOTE_D3,longo);
  delay(small);
  
  tone(bip1,NOTE_G3,longo);
  delay(medio);
  
  tone(bip1,NOTE_D4,longo);
  delay(longo);
  
  tone(bip1,NOTE_D4,curto);
  delay(small);
  tone(bip1,NOTE_B3,curto);
  delay(small);
  tone(bip1,NOTE_A3,curto);
  delay(small);
  
  tone(bip1,NOTE_G4,longo);
  delay(longo);
  
  tone(bip1,NOTE_D4,longo);
  delay(longo);
  
  tone(bip1,NOTE_C4,curto);
  delay(small);
  tone(bip1,NOTE_B3,curto);
  delay(small);
  tone(bip1,NOTE_A3,curto);
  delay(small);
  
  tone(bip1,NOTE_G4,longo);
  delay(longo);
  
  tone(bip1,NOTE_D4,longo);
  delay(longo);
  
  tone(bip1,NOTE_D4,curto);
  delay(small);
  tone(bip1,NOTE_B3,curto);
  delay(small);
  tone(bip1,NOTE_D4,curto);
  delay(small);

  tone(bip1,NOTE_A3,longo);
  delay(longo);
  
  delay(5000);

}
