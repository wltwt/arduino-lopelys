
// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  // genererer partall med å sette inkrementeringen til i + 2 se under for flere tester
  for (int i = 0; i <= 50; i = i + 2) {
  	Serial.print(i);
    Serial.print(", ");

  // formaterer kode, lager ny linje hver tiende kjøring
	if (i % 10 == 0 && i != 0) {
    	Serial.println("");
    }
  }
  Serial.println("");
}

/* 

  #1
  med for-loopen:
  for (int i = 0; i <= 50; i = i + 2)

Serial Monitor:
0, 2, 4, 6, 8, 10, 
12, 14, 16, 18, 20, 
22, 24, 26, 28, 30, 
32, 34, 36, 38, 40, 
42, 44, 46, 48, 50, 

0, 2, 4, 6, 8, 10, 
12, 14, 16, 18, 20, 
22, 24, 26, 28, 30, 
32, 34, 36, 38, 40, 
42, 44, 46, 48, 50, 
*/

/* 
  
  #2
  med for-loopen:
  for (int i = 0; i <= 50; i = i + 3)

Serial Monitor:
0, 3, 6, 9, 12, 15, 
18, 21, 24, 27, 30, 
33, 36, 39, 42, 45, 
48, 

0, 3, 6, 9, 12, 15, 
18, 21, 24, 27, 30, 
33, 36, 39, 42, 45, 
48, 
*/
