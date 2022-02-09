#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE 
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);


float readHumidity(){
  float humidity = dht.readHumidity();
  Serial.print(humidity);
  Serial.println("%");
  return humidity;
}

float readTemperature(){
  float temperature = dht.readTemperature();
  Serial.print(temperature);
  Serial.println("C°");
  return temperature;
}

// Default pin 2
void configTempHumidity() {
  Serial.begin(9600);
  dht.begin();
}
