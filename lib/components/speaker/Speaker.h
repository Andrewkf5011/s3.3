#include<mbed.h>

#ifndef SPEAKER_H
#define SPEAKER_H

class Speaker
{
  private:

    PinName pinName;

  public:
    PwmOut pwmOut;

    Speaker(PinName pinName);
    
    PinName getPinName();
    void play();
    void stop();
};

#endif // SPEAKER_H
