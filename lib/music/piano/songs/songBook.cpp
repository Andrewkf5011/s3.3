#include "Song.h"
#include "Piano.h"
#include<mbed.h>
#include<stdbool.h>

//Another song which may be worth looking at: https://musescore.com/user/8335901/scores/2590566


class StarWars: public Song
{
  public:
    StarWars(Piano piano, float tempo) : Song(piano, tempo)
    {

    }

    void playSong()
    {
      //Song from: https://www.musicnotes.com/sheetmusic/mtd.asp?ppn=MN0133739

      //First line
      piano.playNote(piano.KEY_A4, calculateNoteDuration(piano.NOTE_QUARTER));
      piano.playNote(piano.KEY_A4, calculateNoteDuration(piano.NOTE_QUARTER));
      piano.playNote(piano.KEY_A4, calculateNoteDuration(piano.NOTE_QUARTER));

      piano.playNote(piano.KEY_F3, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_C4, calculateNoteDuration(piano.NOTE_EIGHTH));

      piano.playNote(piano.KEY_A4, calculateNoteDuration(piano.NOTE_QUARTER));

      piano.playNote(piano.KEY_F3, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_C4, calculateNoteDuration(piano.NOTE_EIGHTH));

      piano.playNote(piano.KEY_A4, calculateNoteDuration(piano.NOTE_HALF));

      //Second line
      piano.playNote(piano.KEY_E4, calculateNoteDuration(piano.NOTE_QUARTER));
      piano.playNote(piano.KEY_E4, calculateNoteDuration(piano.NOTE_QUARTER));
      piano.playNote(piano.KEY_E4, calculateNoteDuration(piano.NOTE_QUARTER));

      piano.playNote(piano.KEY_F3, calculateNoteDuration(piano.NOTE_QUARTER));
      piano.playNote(piano.KEY_C4, calculateNoteDuration(piano.NOTE_QUARTER));

      piano.playNote(piano.KEY_G3_SHARP, calculateNoteDuration(piano.NOTE_QUARTER));

      piano.playNote(piano.KEY_F3, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_C4, calculateNoteDuration(piano.NOTE_EIGHTH));

      piano.playNote(piano.KEY_A4, calculateNoteDuration(piano.NOTE_HALF));

      piano.playNote(piano.KEY_A5, calculateNoteDuration(piano.NOTE_QUARTER));
      piano.playNote(piano.KEY_A4, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_A4, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_A5, calculateNoteDuration(piano.NOTE_QUARTER));

      piano.playNote(piano.KEY_G4_SHARP, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_G4, calculateNoteDuration(piano.NOTE_EIGHTH));

      //Third line
      piano.playNote(piano.KEY_F4_SHARP, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_F4, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_F4_SHARP, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_A4_SHARP, calculateNoteDuration(piano.NOTE_EIGHTH));

      piano.playNote(piano.KEY_D4_SHARP, calculateNoteDuration(piano.NOTE_QUARTER));

      piano.playNote(piano.KEY_D4, calculateNoteDuration(piano.NOTE_QUARTER));
      piano.playNote(piano.KEY_C4_SHARP, calculateNoteDuration(piano.NOTE_QUARTER));

      piano.playNote(piano.KEY_C4, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_B4, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_C4, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_F3, calculateNoteDuration(piano.NOTE_EIGHTH));

      piano.playNote(piano.KEY_G3_SHARP, calculateNoteDuration(piano.NOTE_QUARTER));

      piano.playNote(piano.KEY_F3, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_G3_SHARP, calculateNoteDuration(piano.NOTE_EIGHTH));

      //Fourth Line
      piano.playNote(piano.KEY_C4, calculateNoteDuration(piano.NOTE_QUARTER));
      piano.playNote(piano.KEY_A4, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_C4, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_E4, calculateNoteDuration(piano.NOTE_HALF));

      piano.playNote(piano.KEY_A5, calculateNoteDuration(piano.NOTE_QUARTER));
      piano.playNote(piano.KEY_A4, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_A4, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_A5, calculateNoteDuration(piano.NOTE_QUARTER));

      piano.playNote(piano.KEY_G4_SHARP, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_G4, calculateNoteDuration(piano.NOTE_EIGHTH));

      piano.playNote(piano.KEY_F4_SHARP, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_F4, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_F4_SHARP, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_A4_SHARP, calculateNoteDuration(piano.NOTE_EIGHTH));

      piano.playNote(piano.KEY_D4_SHARP, calculateNoteDuration(piano.NOTE_QUARTER));

      piano.playNote(piano.KEY_D4, calculateNoteDuration(piano.NOTE_QUARTER));
      piano.playNote(piano.KEY_C4_SHARP, calculateNoteDuration(piano.NOTE_QUARTER));

      //Fifth Line
      piano.playNote(piano.KEY_C4, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_B4, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_C4, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_F3, calculateNoteDuration(piano.NOTE_EIGHTH));

      piano.playNote(piano.KEY_G3_SHARP, calculateNoteDuration(piano.NOTE_QUARTER));

      piano.playNote(piano.KEY_F3, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_C4, calculateNoteDuration(piano.NOTE_EIGHTH));

      piano.playNote(piano.KEY_A4, calculateNoteDuration(piano.NOTE_QUARTER));

      piano.playNote(piano.KEY_F3, calculateNoteDuration(piano.NOTE_EIGHTH));
      piano.playNote(piano.KEY_C4, calculateNoteDuration(piano.NOTE_EIGHTH));

      piano.playNote(piano.KEY_A4, calculateNoteDuration(piano.NOTE_HALF));
    }
};
