# Arduino Temperature and Humidity Monitoring System with DHT11 Sensor and LED Indicator

This project uses an Arduino with a DHT11 sensor to measure temperature and humidity. When the temperature rises above a specified threshold, an LED is turned on as an alert.

## Features

- **Temperature and Humidity Measurement**: Measures the temperature and humidity using the DHT11 sensor.
- **LED Indicator**: An LED lights up when the temperature exceeds the defined threshold, acting as a warning signal.

## Requirements

- **Hardware**:
  - Arduino board (e.g., Uno, Nano)
  - DHT11 temperature and humidity sensor
  - LED
  - Resistor (e.g., 220Ω for the LED)
  - Jumper wires
  - Breadboard (optional)

## Wiring

1. **DHT11 Sensor**:
   - VCC to Arduino 5V
   - GND to Arduino GND
   - Data Pin to Arduino digital pin 4 (`DHTPIN`)

2. **LED**:
   - Connect the anode (longer leg) to digital pin 13 (`LED`) via a 220Ω resistor.
   - Connect the cathode (shorter leg) to GND.
  
## Explanation


1. **DHT11 Sensor**: Reads temperature in Celsius and Fahrenheit, and humidity.
2. **LED Threshold**: If the temperature (t) exceeds newT, the LED turns on as a warning.
3. **Serial Monitor**: Displays humidity, temperature, and heat index.

## Usage

**Setup**: Connect the Arduino to power. The DHT11 will measure the temperature and humidity every second.
**Monitoring**: Open the Serial Monitor to view the readings in real time.
**LED Indicator**: When the temperature is above the threshold, the LED will light up.
