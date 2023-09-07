// C++ code
//
// https://www.tinkercad.com/things/es2PoJHAyll-grand-jofo-bombul/editel
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void for_loop_func(int &j) {
  j = j + 100;
  for (int i = 0; i <= 9; i++) {
  	Serial.print(i);
    Serial.print(", ");
  }
  Serial.println("");
  
}

void loop()
{
  int i = 0;
  int *point_i;
  point_i = &i;

  for_loop_func(*point_i);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  Serial.print("BLINK OVER,      i=");
  Serial.println(i);
}


