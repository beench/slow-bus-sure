#define SWITCH 3
#define ON 0
#define OFF 1
int switchInput;

void setup() {
  Serial.begin(9600);
  pinMode(SWITCH, INPUT);
}

void loop() {
  switchInput = digitalRead(SWITCH);
  if (switchInput == ON) Serial.println("Pressed");
  else if (switchInput == OFF) Serial.println("Not Pressed");
  delay(1000);
}
