#include <Arduino.h>

bool state = LOW;
void setup() {
    Serial.begin(115200);
    pinMode(PC13, OUTPUT);
}

void loop() {
    Serial.println("Checkem\n");
    digitalWrite(PC13, state = !state);
    delay(2000);
}
