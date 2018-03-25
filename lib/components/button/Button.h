#ifndef BUTTON_H
#define BUTTON_H

#include<mbed.h>
#include<stdbool.h>

class Button
{
  private:
    PinName pinName;
    bool usesPullUpResistor;

  public:
    DigitalIn digitalIn;

    Button(PinName pinName, bool usesPullUpResistor);

    PinName getPinName();
    bool isPressed();

};

#endif //BUTTON_H
