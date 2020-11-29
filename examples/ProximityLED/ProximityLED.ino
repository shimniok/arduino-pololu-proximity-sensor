#include <IRProximitySensor.h>

const int led = LED_BUILTIN; // LED pin
IRProximitySensor left(2, 14); // sensor output on pin 2, enable on pin 14

void setup() {
  // Digital output, LED demo, set up pin as output
  pinMode(led, OUTPUT);
}

void loop() {
  if (left.somethingNearby()) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
  delay(20);
}
