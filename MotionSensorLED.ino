#include <Arduino.h>

int MOTION_PIN = 7;
int LED_1 = 6;
int LED_2 = 5;

void setup() {
  pinMode(MOTION_PIN, INPUT);
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
}

void loop() {
  long sMotion = digitalRead(MOTION_PIN);
  if (sMotion == HIGH) {
    digitalWrite(LED_1, HIGH);
    digitalWrite(LED_2, HIGH);
  } else {
    digitalWrite(LED_1, LOW);
    digitalWrite(LED_2, LOW);
  }
}
