#include "Song.h"
#include "Piano.h"
#include<mbed.h>
#include<stdbool.h>

class StarWars: public Song
{
  public:
    StarWars(Piano piano, float tempo) : Song(piano, tempo)
    {

    }

    void playSong()
    {
      //First line
      piano.playNote(piano.KEY_A4, calculateNoteDuration(piano.NOTE_QUARTER));
      piano.playNote(piano.KEY_A4, calculateNoteDuration(piano.NOTE_QUARTER));
      piano.playNote(piano.KEY_A4, calculateNoteDuration(piano.NOTE_QUARTER));

      piano.playNote(piano.KEY_F3, calculateNoteDuration(piano.NOTE_QUARTER));
      piano.playNote(piano.KEY_C4, calculateNoteDuration(piano.NOTE_QUARTER));

      piano.playNote(piano.KEY_A4, calculateNoteDuration(piano.NOTE_QUARTER));

      piano.playNote(piano.KEY_F3, calculateNoteDuration(piano.NOTE_QUARTER));
      piano.playNote(piano.KEY_C4, calculateNoteDuration(piano.NOTE_QUARTER));

      piano.playNote(piano.KEY_A4, calculateNoteDuration(piano.NOTE_HALF));

      //Second line
      piano.playNote(piano.KEY_E4, calculateNoteDuration(piano.NOTE_QUARTER));
      piano.playNote(piano.KEY_E4, calculateNoteDuration(piano.NOTE_QUARTER));
      piano.playNote(piano.KEY_E4, calculateNoteDuration(piano.NOTE_QUARTER));

      piano.playNote(piano.KEY_F3, calculateNoteDuration(piano.NOTE_QUARTER));
      piano.playNote(piano.KEY_C4, calculateNoteDuration(piano.NOTE_QUARTER));

      piano.playNote(piano.KEY_A4, calculateNoteDuration(piano.NOTE_QUARTER));

      piano.playNote(piano.KEY_F3, calculateNoteDuration(piano.NOTE_QUARTER));
      piano.playNote(piano.KEY_C4, calculateNoteDuration(piano.NOTE_QUARTER));

      piano.playNote(piano.KEY_A4, calculateNoteDuration(piano.NOTE_HALF));
    }
};
