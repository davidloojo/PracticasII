// C++ code
//
void setup()
{
  pinMode(10, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  if (digitalRead(10) == HIGH) {
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  } else {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(4000); // Wait for 4000 millisecond(s)
    digitalWrite(LED_BUILTIN, LOW);
    delay(2000); // Wait for 2000 millisecond(s)
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    delay(4000); // Wait for 4000 millisecond(s)
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    delay(2000); // Wait for 2000 millisecond(s)
  }
}
