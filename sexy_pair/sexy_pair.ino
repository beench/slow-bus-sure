int x;
int y;

void setup() {
  Serial.begin(9600);
  x = 1;
  
}

void loop() {
  y = x+6;
  if (isPrime(x) && isPrime(y))
  {
  Serial.print("(");
  Serial.print(x);
  Serial.print(",");
  Serial.print(y);
  Serial.println(")");
  delay(1000);
  }
  x++;
}

bool isPrime(int input){
  if (x == 1) return false;
  for (int i = 2; i < input ; i++)
  {
    if (input%i == 0) return false;
  }
  return true;
}

