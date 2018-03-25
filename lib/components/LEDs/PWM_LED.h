#include<mbed.h>

#ifndef PWMLED_H
#define PWMLED_H

class PWM_LED
{
  private:
    PinName pinName;

  public:
    PwmOut pwmOut;

    PWM_LED(PinName pinName);

    PinName getPinName();
    void on();
    void on(float brightness);
    void off();
};

#endif // PWMLED_H
