#include<stdbool.h>
#include<mbed.h>
#include "Song.h"
#include "Piano.h"

Song::Song(Piano piano, float tempo) : piano(piano)
{
    Song::tempo = tempo;
}

void Song::playSong() {}
