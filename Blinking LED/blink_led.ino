// This is an example of a simple LED blinking program for DigiSpark Attiny85

void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  digitalWrite(1, HIGH);
  delay(1000);

  digitalWrite(1, LOW);
  delay(1000);
}