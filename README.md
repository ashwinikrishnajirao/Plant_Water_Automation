# Automatic Plant Watering System

## Overview
In daily farming or gardening operations, watering is a crucial yet intensive task. Whether in hot, dry weather or cloudy, wet conditions, controlling the amount of water reaching your plants is essential. Our project demonstrates the efficient use of the Internet of Things (IoT) for traditional agriculture by developing an automatic plant watering system using a combination of pipes, pumps, and sensors. This system ensures plants are adequately watered even in the owner's absence, promoting consistent plant care and water conservation.

## Features
- **Automatic Watering**: Based on soil moisture levels detected by sensors.
- **Manual Override**: Timer-based system for setting specific watering times.
- **Cost-effective and Simple**: Utilizes Arduino UNO and soil moisture sensors.
- **Community-friendly**: Allows non-experts to achieve expert-level plant care.

## Components Used
- Arduino Adjustable Soil Moisture Sensor
- Liquid/Water Level Sensor Module
- 6-12V Water Pump
- 12V Relay
- 4V Li-Po Battery
- Breadboard Jumper Wires
- Arduino UNO
- Pipes
- Breadboard
- Water Tank
- 3 pots of soil

## Advantages
- **Fast Execution**: Quicker than manual watering.
- **Simplicity and Portability**: Easy to set up and use.
- **Low Power Consumption**: Efficient use of power.
- **Accurate Dryness Detection**: Ensures plants receive the right amount of water.
- **Non-expert Friendly**: Simplifies expert tasks.
- **Improved Productivity**: Enhances work output and efficiency.
- **Time-saving**: Automates specific objectives.
- **Optimal Watering**: Prevents under or over-watering.
- **Cost and Water Savings**: Reduces labor costs and conserves up to 70% water.

## Technology Stack
### Hardware
- **Processor**: x86 compatible processor with 1.7 GHz Clock Speed
- **RAM**: 1024 MB or greater
- **Hard Disk**: 20 GB or greater
- **Monitor**: VGA/SVGA
- **Keyboard**: 104 keys standard
- **Mouse**: 2/3 button, Optical/Mechanical

### Software
- **Operating System**: Windows 7/8/10, Linux, Mac OS X

## System Design
### External Sensor Unit
- **Function**: Senses soil moisture through capacitive reactance.
- **Components**: Soil moisture sensor, comparator, operational amplifier, relay.

### Inbuilt Processing Unit
- **Function**: Controls water pump based on soil moisture levels.
- **Components**: Arduino UNO, relay, op-amp, transistor, LED indicators.

## Working Principle
1. **Sensor Probes Placement**: Inserted into the soil at specific depths and intervals.
2. **Moisture Detection**: Wet soil conducts electricity better than dry soil. The sensor module uses a comparator to detect voltage differences.
3. **Automatic Watering**: When the soil is dry, the sensor triggers the relay to turn on the water pump.
4. **Water Supply Regulation**: The system stops watering once the soil moisture reaches the predefined threshold, preventing over-watering.
5. **Indicators**: LEDs provide visual status of the system's operation.

## Installation and Setup
### Prerequisites
- Arduino IDE installed on your machine.
- Basic understanding of Arduino programming and circuit connections.

### Steps
1. **Hardware Setup**
    - Connect the soil moisture sensor, water pump, and relay to the Arduino UNO according to the schematic.
    - Insert the sensor probes into the soil at specific locations.
    - Ensure proper wiring and connections.

2. **Software Setup**
    - Clone the repository:
      ```bash
      git clone [https://github.com/ashwinikrishnajirao/Plant_Water_Automation.git]
      cd automatic-plant-watering
      ```
    - Open the Arduino IDE and load the provided sketch:
      ```arduino
      // Example sketch code
      #include <Arduino.h>
      // Define pins and variables
      const int sensorPin = A0;
      const int relayPin = 7;
      int moistureLevel;

      void setup() {
        pinMode(sensorPin, INPUT);
        pinMode(relayPin, OUTPUT);
        digitalWrite(relayPin, LOW);
        Serial.begin(9600);
      }

      void loop() {
        moistureLevel = analogRead(sensorPin);
        Serial.print("Moisture Level: ");
        Serial.println(moistureLevel);

        if (moistureLevel < threshold) {
          digitalWrite(relayPin, HIGH); // Turn on the water pump
        } else {
          digitalWrite(relayPin, LOW); // Turn off the water pump
        }

        delay(1000);
      }
      ```
    - Upload the sketch to the Arduino UNO.

3. **Testing and Calibration**
    - Adjust the threshold value in the sketch according to the moisture level required for your specific plants.
    - Test the system by varying the soil moisture and observing the relay and pump operation.

## Contribution
We welcome contributions to enhance the functionality and features of this project. Please fork the repository and create a pull request with your changes.


This README provides a detailed overview of the Automatic Plant Watering System, including its features, components, advantages, technology stack, system design, and installation instructions. The goal is to offer a reliable, efficient, and user-friendly solution for automated plant care.
