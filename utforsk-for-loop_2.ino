// C++ code
//
void setup()
{
  Serial.begin(9600);
}

/*
  Utforsket litt forskjellige for-løkker.
  Under viser en for-løkke med modulo 
  som vil gå ut hver gang i-variabelen er 10.. 
  Ikke veldig nyttig. Men det finnes.
*/


void loop()
{
  for (int i = 1; i % 10 != 0; i++) {
  	Serial.println(i);
  }
}

/* Serial Monitor:
1
2
3
4
5
6
7
8
9
1
2
3
4
... 
*/
