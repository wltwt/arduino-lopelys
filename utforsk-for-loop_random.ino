// C++ code
//
long random_number;

void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop()
{
  static int count;
  static int end_count;
  static bool test = false;
  
  for (int i = 0; i < 10; i++) {
    random_number = random(0, 10);
    count++;
    //Serial.print(count);
    //Serial.print(", ");
    if (random_number == i) {
      for (int j = 0; j <= count; j++) {
        Serial.print(j);
        if (j % 5 == 0 && j != 0) {
          Serial.println("");
        } else {
          Serial.print(", ");
        }
      }
      end_count = count;
      count = 0;
      break;
    }
  }
  Serial.println("\n");
  Serial.print("loop iterated: ");
  Serial.print(end_count);
  Serial.print(" times before i = random_number: ");
  Serial.print(random_number);
  Serial.println("\n\nrebooting...\n\n\n");
  end_count = 0; 
}

/* Eksempel kodeutskrift:

0, 1, 2, 3, 4, 5
6, 7, 8, 9, 10
11, 12, 13, 14, 15
16, 17, 18, 19, 20
21, 22, 23, 24, 25
26, 

loop iterated: 26 times before i = random_number: 5

rebooting...
*/
