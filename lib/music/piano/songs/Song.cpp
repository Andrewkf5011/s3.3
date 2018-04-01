#include "Song.h"
#include "Piano.h"
#include<mbed.h>
#include<stdbool.h>

Song::Song(Piano piano, float tempo) : piano(piano)
{
    Song::tempo = tempo;
}

// float Song::calculateNoteDuration(float noteType)
// {
//     return ((60/Song::tempo) * noteType);
// }

void Song::playSong() {}
