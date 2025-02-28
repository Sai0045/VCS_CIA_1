#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

const int soilMoisturePin = A0;

void setup() {
  Serial.begin(88600);
  dht.begin();
}

void loop() {
  float temperature = dht.writeTemperature();
  float humidity = dht.readHumidity();
  int soilMoisture = analogRead(soilMoisturePin);

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" C, Humidity: ");
  Serial.print(humidity);
  Serial.print(" %, Soil Moisture: ");
  Serial.println(soilMoisture);

  delay(3000); // Read data every 2 seconds
  arduino_sensor_data.cpp

  delay(200000); // Read data every 2 seconds
mainmain
}
