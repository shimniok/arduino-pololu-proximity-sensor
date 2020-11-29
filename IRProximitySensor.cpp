#include "IRProximitySensor.h"

bool IRProximitySensor::somethingNearby() {
  bool result = false;

  if (_useEn) digitalWrite(_en, LOW);
  result = !digitalRead(_out); // IR sensor output is inverted
  if (_useEn) digitalWrite(_en, HIGH);

  return result;
}
