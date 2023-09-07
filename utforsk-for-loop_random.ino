/*
  Avansert: Eller du ønsker å lage en for-løkke som genererer et randomtall mellom 0 og 10
  for hver iterasjon (det finnes en random-funksjon!), og så ønsker du å skrive ut alle tall 
  mellom 0 og 10, om og om igjen, helt fram til den iterasjonen hvor du treffer tellevariabelens
  verdi eksakt med random-tallet. Da skal du skrive hvor mange 0-til-10-runder du fikk til
  før du ble avbrutt av random-tall-treffet.
*/

long random_number;

void setup()
{
  Serial.begin(9600);
  // setter opp randomSeed for litt mer tilfeldig tallgenerasjon
  randomSeed(analogRead(0));
}

void loop()
{
  static int count;
  static int end_count;
  
  // for loop fra 0-10 
  for (int i = 0; i < 10; i++) {
    // re-genereres for hver iterasjon av for-loopen
    random_number = random(0, 10);

    // teller hvor mange ganger for-loopen har iterert
    count++;

    // sjekker om det tilfeldige tallet som ble generert er likt rundenummeret i for-loopen
    if (random_number == i) {
      
      // for-loop nr. 2 skriver ut fra 0 til count
      for (int j = 0; j <= count; j++) {
        Serial.print(j);
        
        // kun for formatering av utskrift
        if (j % 5 == 0 && j != 0) {
          Serial.println("");
        } else {
          Serial.print(", ");
        }
      }
      // end_count er kun for å skrive ut resultatet i egen kodeblokk nedenfor
      end_count = count;
      count = 0;
      // bryter ut av for-loopen når kriteriet er møtt
      break;
    }
  }
  // skriv ut resten av informasjon
  Serial.println("\n");
  Serial.print("loop iterated: ");
  Serial.print(end_count);
  Serial.print(" times before i = random_number: ");
  Serial.print(random_number);
  Serial.println("\n\nrebooting...\n\n\n");
  end_count = 0; 
}

/* 

Serial Monitor:
0, 1, 2, 3, 4, 5
6, 7, 8, 9, 10
11, 12, 13, 14, 15
16, 17, 18, 19, 20
21, 22, 23, 24, 25
26, 

loop iterated: 26 times before i = random_number: 5

rebooting...
*/
