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

    // TODO 5:
    // Read analog value from FSR
    fsrValue = analogRead(FSR_PIN);

    // TODO 6:
    // Print raw ADC value
    Serial.print("FSR Value: ");
    Serial.println(fsrValue);
}