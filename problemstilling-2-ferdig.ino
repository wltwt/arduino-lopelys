//------------------------------------------------------------
/*	Programmet skal slå på og av LEDene i et løpelysmønster. 
	Vi ser at LEDene ikke er koblet til etterfølgende pinnenumre
    slik vi hadde i Problemstilling 1.
    
    Hvordan løser vi det? 
    
    Vi ønsker fortsatt den kompakte koden både i setup() og loop()
    som vi fikk til i Problemstilling 1. Vi vil også ha samme glatte
    løpelyset som flyter opp og ned rekka av LEDs.
*/

// led-oppsett
const byte ledArray[] = {2,4,7,8,11,13};

// bestem hastighet i ms
const int timer = 100;

// brukes for å sette retning.
bool forward = false;
int i = 0;

/*
	oppsett av arduinoen som kjører en gang før loop()
*/
void setup(){
  // for-loop som itererer gjennom led-arrayet og setter ut-pinnene
  for (byte i = 0; i < sizeof(ledArray); i++) {
  	pinMode(ledArray[i], OUTPUT);
  }
  
  // endre retning ved start
  if (!forward) {
  	i = sizeof(ledArray);
  }

  // Serial.begin(9600);
} // end void setup

/*
    endrer retning til løpelysene
*/
void checkDirection() {
  if (forward) {
    i++;
    if (i == sizeof(ledArray) - 1) {
      forward = false;
    } 
  } else {
    i--;
    if (i == 0) {
      forward = true;
    }
  }
}// end void checkDirection

/*
    hovedprogrammet som kjører
*/
void loop() {
  // setter opp static så variablen ikke resetter seg til 0 med hver runde  
  static unsigned long firstTimer = 0;
  
  // if-setningen under kjører med 100ms intervaller, basert på timer-variablen
  if (millis() - firstTimer >= timer) {
    firstTimer = millis();
    
    // sjekk om lyset er på eller av så endre til motsatte
    if (digitalRead(ledArray[i]) == HIGH) {
      digitalWrite(ledArray[i], LOW);
      checkDirection();
    } else {
      digitalWrite(ledArray[i], HIGH);
    }
  }
}// end void loop

