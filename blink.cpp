#include <Arduino.h>
void setup(){
    pinMode(15, OUTPUT);
}

void loop(){
    digitalWrite(15, HIGH);
    delay(100);
    digitalWrite(15, LOW);
    delay(100);
}