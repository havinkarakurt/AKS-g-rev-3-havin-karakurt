#include <OneWire.h>

#include <DallasTemperature.h>



#include <OneWire.h>
#include <DallasTemperature.h>
#define ONE_WIRE_BUS 2
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);




void setup() {
Serial.begin(9600);
sensors.begin();
Serial.println("DS18B20 Sicaklik Sensörü Baslatildi");
}


void loop() {

sensors.requestTemperatures(); 
float sicaklik = sensors.getTempCByIndex(0);

Serial.print("Sicaklik: ");
  Serial.print(sicaklik);
  Serial.println(" °C");
  
  delay(200);
}
