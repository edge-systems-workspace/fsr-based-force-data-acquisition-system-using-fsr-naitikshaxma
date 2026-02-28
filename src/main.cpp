#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * @author Naitik Sharma
 * @date 2026-02-28
 */

#define FSR_PIN A0
int fsrValue = 0;

void setup() {
    Serial.begin(9600);
    Serial.println("FSR Force Measurement System Initialized...");
}

void loop() {

    fsrValue = analogRead(FSR_PIN);

    Serial.print("FSR Value: ");
    Serial.println(fsrValue);

    // TODO 7:
    // Apply simple threshold logic
    if (fsrValue > 100) {

        // TODO 8:
        // Print pressure detection message
        Serial.println("Pressure Detected!");
    } else {
        Serial.println("No Pressure");
    }

    // TODO 9:
    // Add delay
    delay(1000);
}