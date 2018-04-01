#include "Piano.h"
#include<mbed.h>
#include <cmath>

#ifndef SONG_H
#define SONG_H

/**
 * @brief An abstract class which describes a song which can be
 *        played by a piano.
 *
 * Version: 1.1
 * Date: 28/03/2018
 * Originally Created: 29/03/2018
 */
class Song
{
    protected:
        //[piano] This is the piano to play the song on.
        Piano piano;

        //float calculateNoteDuration(float noteType);
        
        float tempo;

    public:
        Song(Piano piano, float tempo);
        virtual void playSong();
};

#endif // SONG_H
