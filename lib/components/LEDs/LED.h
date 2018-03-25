#include<mbed.h>

#ifndef LED_H
#define LED_H

class LED
{
  private:
    PinName pinName;

  public:
    DigitalOut digitalOut;

    LED(PinName pinName);

    PinName getPinName();
    void on();
    void off();
};

#endif // LED_H
