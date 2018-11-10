#define LED 3

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  analogWrite(LED, 255);
  delay(500);
  analogWrite(LED, 150);
  delay(500);
  analogWrite(LED, 50);
  delay(500);
  analogWrite(LED, 0);
  delay(500);
  analogWrite(LED, 50);
  delay(500);
  analogWrite(LED, 150);
  delay(500);
  analogWrite(LED, 250);
  delay(500);

  /*digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);*/
}
