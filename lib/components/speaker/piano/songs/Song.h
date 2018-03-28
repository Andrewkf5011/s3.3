#include "Piano.h"
#include<mbed.h>
#include <cmath>

#ifndef SONG_H
#define SONG_H

class Song
{
  protected:
    Piano piano;
    float calculateNoteDuration(float noteType);

  private:
    float tempo;

  public:
    Song(Piano piano, float tempo);
    virtual void playSong();
};

#endif // SONG_H
