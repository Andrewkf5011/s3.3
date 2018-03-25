#include<mbed.h>

#ifndef POTENTIOMETER_H
#define POTENTIOMETER_H

class Potentiometer
{
  private:
    PinName pinName;

  public:
    AnalogIn analogIn;

    Potentiometer(PinName pinName);

    PinName getPinName();
    float read();
};

#endif // POTENTIOMETER_H
