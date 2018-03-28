#include<mbed.h>
#include "Speaker.h"
#include <cmath>

#ifndef PIANO_H
#define PIANO_H

class Piano
{
  private:
    Speaker speaker;
    float getFrequency(float key);

  public:
    Piano(Speaker speaker);
    void playNote(float key, float noteDuration);

};

#endif // PIANO_H
