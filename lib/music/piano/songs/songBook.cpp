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
      piano.playNote(piano.KEY_A4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_A4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_A4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      piano.playNote(piano.KEY_F3, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));

      piano.playNote(piano.KEY_A4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      piano.playNote(piano.KEY_F3, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));

      piano.playNote(piano.KEY_A4, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));

      //Second line
      piano.playNote(piano.KEY_E4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_E4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_E4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      piano.playNote(piano.KEY_F3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      piano.playNote(piano.KEY_G3_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      piano.playNote(piano.KEY_F3, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));

      piano.playNote(piano.KEY_A4, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));

      piano.playNote(piano.KEY_A5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_A4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_A4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_A5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      piano.playNote(piano.KEY_G4_SHARP, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));

      //Third line
      piano.playNote(piano.KEY_F4_SHARP, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_F4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_F4_SHARP, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_A4_SHARP, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));

      piano.playNote(piano.KEY_D4_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_C4_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_B4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_F3, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));

      piano.playNote(piano.KEY_G3_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      piano.playNote(piano.KEY_F3, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_G3_SHARP, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));

      //Fourth Line
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_A4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_E4, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));

      piano.playNote(piano.KEY_A5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_A4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_A4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_A5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      piano.playNote(piano.KEY_G4_SHARP, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));

      piano.playNote(piano.KEY_F4_SHARP, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_F4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_F4_SHARP, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_A4_SHARP, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));

      piano.playNote(piano.KEY_D4_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_C4_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //Fifth Line
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_B4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_F3, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));

      piano.playNote(piano.KEY_G3_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      piano.playNote(piano.KEY_F3, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));

      piano.playNote(piano.KEY_A4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      piano.playNote(piano.KEY_F3, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));

      piano.playNote(piano.KEY_A4, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));
    }
};
