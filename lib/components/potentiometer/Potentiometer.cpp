#include "Potentiometer.h"
#include <mbed.h>

Potentiometer::Potentiometer(PinName pinName) : analogIn(pinName)
{
  Potentiometer::pinName = pinName;
}

PinName Potentiometer::getPinName()
{
  return pinName;
}

float Potentiometer::read()
{
  return analogIn.read();
}
