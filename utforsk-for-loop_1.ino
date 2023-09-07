// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  static int counter;
  Serial.println("for-lokken sin tellevariabel:");
  for (int i = 0; i <= 9; i++) {
    counter++;
  	Serial.print(i);
    if (i != 9) {
      Serial.print(", ");
    } else {
      Serial.print("\n");
    }
    //Serial.println(counter);
  }
  
  Serial.println("");
  Serial.print("egen tellevariabel: ");
  Serial.println(counter);
  Serial.println("");
}


// for (int i = 0; i <= 9; i++)
// Serial Monitor:
/* 

for-lokken sin tellevariabel:
0, 1, 2, 3, 4, 5, 6, 7, 8, 9

egen tellevariabel: 10

for-lokken sin tellevariabel:
0, 1, 2, 3, 4, 5, 6, 7, 8, 9
*/

// for (int i = 0; i <= 9; i = i + 1)

/* Utskrift fra Serial Monitor:
for-lokken sin tellevariabel:
0, 1, 2, 3, 4, 5, 6, 7, 8, 9

egen tellevariabel: 10

for-lokken sin tellevariabel:
0, 1, 2, 3, 4, 5, 6, 7, 8, 9
*/


// for (int i = 0; i <= 9; i--)

/* Utskrift fra Serial Monitor:
for-lokken sin tellevariabel:

0, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15, -16, -17,
*/

// for (int i = 0; i <= 9; i = i - 1)

/* Utskrift fra Serial Monitor:
for-lokken sin tellevariabel:

0, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15, -16, -17,
*/

// for (int i = 0; i > 100; i = i + 5)

/* Utskrift fra Serial Monitor:
for-lokken sin tellevariabel:

egen tellevariabel: 0

for-lokken sin tellevariabel:

egen tellevariabel: 0
*/