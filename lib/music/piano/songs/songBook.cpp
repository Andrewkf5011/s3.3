#include "Song.h"
#include "Piano.h"
#include<mbed.h>
#include<stdbool.h>

/**
 * @brief The sheet music for the Darth Vader theme from StarWars.
 *
 * Version: 1.3
 * Date: 27/03/2018
 * Originally Created: 29/03/2018
 */
class StarWars: public Song
{
  public:

    /**
     * @brief Constructor for the StarWars theme.
     * @param piano This is the pinao to play the song on.
     * @param tempo This is the tempo to play the song at.
     */
    StarWars(Piano piano, float tempo) : Song(piano, tempo)
    {

    }

    /**
     * @brief Plays the song.
     */
    void playSong()
    {
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
