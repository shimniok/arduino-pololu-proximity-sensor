/*! \file IRProximitySensor.h
 *
 * See class reference for more information
 *
 * \class IRProximitySensor IRProximitySensor.h
 * \brief Read Pololu proximity sensor (https://www.pololu.com/product/2578) output w/ enable/disable
 *
 */
#ifndef IRProximitySensor_h
#define IRProximitySensor_h

#include <Arduino.h>

class IRProximitySensor
{
  public:
    IRProximitySensor(int outputPin, int enablePin=-1):
      _out(outputPin), _en(enablePin)
    {
      pinMode(outputPin, INPUT);
      _useEn = (enablePin >= 0);
      if (_useEn) {
        pinMode(enablePin, OUTPUT);
        digitalWrite(enablePin, HIGH);
      }
    }

    bool somethingNearby();

  private:
    int _out;
    int _en;
    bool _useEn;
};

#endif
