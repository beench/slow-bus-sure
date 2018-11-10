int price;
String str = "i can't breathe without you but i have to";
//char str[] = "i can't breathe without you but i have to";
//#define str "i can't breathe without you but i have to"

void setup() {
  Serial.begin(9600);
  price = 0;
  for (char i : str)
  {
    if (i >= 'A' && i <= 'Z') price += 5;
    else if (i >= 'a' && i <= 'z') price += 3;
    else if (i >= '0' && i <= '9') price += 7;
    else price+=1;
  }
  Serial.println(price);
}

void loop() {

}
