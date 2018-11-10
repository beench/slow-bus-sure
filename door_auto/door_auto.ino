#include <Servo.h>
#define SERVO 3
//#define SWITCH 10
#define trigPinA 6
#define echoPinA 7
#define trigPinB 11
#define echoPinB 12
int people = 0;


Servo myServo;
boolean isOpen;
int switchInput;

void setup() {
  Serial.begin(9600);
  myServo.attach(SERVO);
  //  pinMode(SWITCH, INPUT);
  pinMode(trigPinA, OUTPUT);
  pinMode(echoPinA, INPUT);
  pinMode(trigPinB, OUTPUT);
  pinMode(echoPinB, INPUT);
  //  isOpen = false;
  myServo.write(130);
}
long checkA()
{
  long duration, distanceA, distanceB;
  digitalWrite(trigPinA, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPinA, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPinA, LOW);
  duration = pulseIn(echoPinA, HIGH);
  distanceA = (duration / 2.0) / 29.1;
    Serial.print("A: ");
    Serial.println(distanceA);
  delay(500);

  return distanceA;  
}
long checkB()
{
  long duration, distanceA, distanceB;
  digitalWrite(trigPinB, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPinB, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPinB, LOW);
  duration = pulseIn(echoPinB, HIGH);
  distanceB = (duration / 2.0) / 29.1;
    Serial.print("B: ");
    Serial.println(distanceB);
  delay(500);

  return distanceB;  
}
void loop() {

  
  if (checkA() < 30) {
    Serial.print("A: ");
    Serial.println(checkA());
    myServo.write(30);
    while (1)
    {
      Serial.print("A2: ");
      Serial.println(checkA());
      Serial.print("inwhile: ");
      delay(500);
      if (checkB() < 30) {
        Serial.print("B2: ");
        Serial.println(checkB());
        myServo.write(120);
        people++;
        Serial.print("People: ");
  Serial.println(people);
        Serial.print("out: ");
        break;
      }
    }
    delay(500);
  }
  else if (checkB() < 30) {
    Serial.print("B: ");
    Serial.println(checkB());
    myServo.write(30);
    while (1)
    {
      Serial.print("inwhile: ");
      if (checkA() < 30) {
        //delay(500);
        Serial.print("A: ");
        Serial.println(checkA());
        myServo.write(120);
        people--;
        Serial.print("People: ");
  Serial.println(people);
        Serial.print("out: ");
        break;
      }
    }
    delay(500);
  }
}
