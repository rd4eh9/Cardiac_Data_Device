/*
#include <Wire.h>
#include "MAX30105.h"
#include "heartRate.h"

MAX30105 ppgSensor;

void setup() {
    Serial.begin(115200);
    Wire.begin();

    if (!ppgSensor.begin(Wire, I2C_SPEED_STANDARD)) {
        Serial.println("MAX30102 not found! Check connections.");
        while (1);
    }

    Serial.println("MAX30102 Initialized.");
    ppgSensor.setup();  // Default settings
    ppgSensor.setPulseAmplitudeRed(0x0A);
    ppgSensor.setPulseAmplitudeIR(0x0A);
}

void loop() {
    long irValue = ppgSensor.getIR();  // Get IR sensor value

    if (irValue < 50000) {
        Serial.println("No finger detected.");
        delay(500);
        return;
    }

    float heartRate;
    if (checkForBeat(irValue)) {
        static float lastBeat = 0;
        float delta = millis() - lastBeat;
        lastBeat = millis();
        heartRate = 60 / (delta / 1000);
        Serial.print("Heart Rate: ");
        Serial.print(heartRate);
        Serial.println(" BPM");

    
    }

    Serial.print("IR Value: ");
    Serial.println(irValue);
    delay(100);
}
*/