#include "DHT.h"
#define LED 13

#define DHTPIN 4
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);//type nom paramètres .
float t,h,f;
float newT ;
void setup() {
  dht.begin();
 
  Serial.begin(9600);

    pinMode(DHTPIN, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  
 // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
 h = dht.readHumidity();
  // Read temperature as Celsius (the default)
   t = dht.readTemperature();
  // Read temperature as Fahrenheit (isFahrenheit = true)
   f = dht.readTemperature(true);

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  // Compute heat index in Fahrenheit (the default)
  float hif = dht.computeHeatIndex(f, h);
  // Compute heat index in Celsius (isFahreheit = false)
  float hic = dht.computeHeatIndex(t, h, false);

  Serial.print(F("Humidity: "));
  Serial.print(h);
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.print(F("°C "));
  Serial.print(f);
  Serial.print(F("°F  Heat index: "));
  Serial.print(hic);
  Serial.print(F("°C "));
  Serial.print(hif);
  Serial.println(F("°F"));

if (newT > 1) {
    digitalWrite(LED, HIGH);  // Allume la LED
  } else {
    digitalWrite(LED, LOW);   // Éteint la LED
  }

  
  delay(1000);
}