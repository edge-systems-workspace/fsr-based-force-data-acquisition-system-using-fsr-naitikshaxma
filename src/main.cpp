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

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);
}

void loop() {
}
