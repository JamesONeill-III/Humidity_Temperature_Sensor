#include"DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() 
{
Serial.begin(9600);
Serial.println("DHT test");
dht.begin();
}

void loop() 
{
float h = dht.readHumidity()l;
float t = dht.readTemperature();

if (isnan(t) || isnan(h))
  {
  serial.println("Failed to read from DHT");
  }
else
  {
  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" *C");
  }
  delay(500),
}
}

}
