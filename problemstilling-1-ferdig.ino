/* Programmet tenner og slukker lysdiodene en etter en i
   løpelys-mønster. Det vil si at det ser ut som lyset
   løper opp rekken av lysdioder.
   
   Kodeløsningen er av typen "brute force", hvor vi har en
   egen kodeblokk for tenning og slukking av hver eneste
   lysdiode. Kan det gjøres mer elegant og kompakt? 
*/
//-----------------------------------------------------------
/*
    Problemstilling 1.

    Mer kompakt kode ved bruk av for-løkker og datastrukturen array
    Så ikke noen grunn til å bruke for-loop til av-og-på av LED-lysene
    siden loop() kjører alltid i en løkke.

    Lenke til sketch:
    https://www.tinkercad.com/things/lvqmsAtND8K-copy-of-lopelys-brute-force/editel
*/
// hvor lenge led-lys er på og av
const int timer = 100;

// setter opp led-verdiene i en array
const byte ledArray[] = {2,3,4,5,6,7};
bool forward = true;
byte i = 0;


/*
	oppsett av arduinoen som kjører en gang før loop()
*/
void setup(){
  for (byte i = 0; i < sizeof(ledArray); i++) {
  	pinMode(ledArray[i], OUTPUT);
  }
  Serial.begin(9600);
} //End void setup

/*
    hovedprogrammet som kjører
*/
void loop() { 

  //Tenner og slukker LED på pinne 2-7
  digitalWrite(ledArray[i], HIGH);
  delay(timer);
  digitalWrite(ledArray[i], LOW);
  delay(timer);

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
} //End void loop