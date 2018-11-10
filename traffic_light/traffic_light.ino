#define RED_LED 3
#define YELLOW_LED 6
#define GREEN_LED 9
#define SWITCH 12
#define ON 0
#define BUZZER 11
int switchInput;

void setup() {
  Serial.begin(9600);
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(SWITCH, INPUT);
  pinMode(BUZZER, OUTPUT);
  digitalWrite(RED_LED, HIGH);
}

void loop() {
  switchInput = digitalRead(SWITCH);
  if (digitalRead(RED_LED) == HIGH)
  {
    if (switchInput == ON)
    {
      digitalWrite(RED_LED, LOW);
      digitalWrite(GREEN_LED, HIGH);
      analogWrite(BUZZER, 10);
      delay(1000);
    }
  }
  else if (digitalRead(GREEN_LED) == HIGH)
  {
    if (switchInput == ON)
    {
      digitalWrite(GREEN_LED, LOW);
      analogWrite(BUZZER, 0);
      digitalWrite(YELLOW_LED, HIGH);
      delay(1000);
      digitalWrite(YELLOW_LED, LOW);
      digitalWrite(RED_LED, HIGH);
    }
  }
}

