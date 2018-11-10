#include <dht.h>
#define DHT11 2

dht DHT;
int dhtTemp;
int temperature;
int humidity;
void setup() {
  Serial.begin(9600);

}

void loop() {
  dhtTemp = DHT.read11(DHT11);
  temperature = (int) DHT.temperature;
  humidity = (int) DHT.humidity;
  Serial.print("Temperature : ");
  Serial.println(temperature);
  Serial.print("Humidity : ");
  Serial.println(humidity);
  delay(1000);
}
