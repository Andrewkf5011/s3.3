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

/**
 * @brief The sheet music for the Africa by Toto.
 * https://www.musicnotes.com/sheetmusic/mtd.asp?ppn=MN0137861
 *
 * Version: 1.1
 * Date: 02/04/2018
 * Originally Created: 02/04/2018
 */
class AfricaByToto: public Song
{
  public:

    /**
     * @brief Constructor for this song.
     * @param piano This is the pinao to play the song on.
     * @param tempo This is the tempo to play the song at.
     */
    AfricaByToto  (Piano piano, float tempo) : Song(piano, tempo)
    {

    }

    /**
     * @brief Plays the song.
     */
    void playSong()
    {
      //I
      piano.playNote(piano.KEY_G3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //hear
      piano.playNote(piano.KEY_G3, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      //the
      piano.playNote(piano.KEY_G3, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      //drums
      piano.playNote(piano.KEY_G3, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));

      //ech...
      piano.playNote(piano.KEY_G3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //o...
      piano.playNote(piano.KEY_G3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //in'
      piano.playNote(piano.KEY_A4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //to...
      piano.playNote(piano.KEY_B4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //night
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));
      wait(piano.NOTE_HALF);

      //she
      piano.playNote(piano.KEY_E3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //hears
      piano.playNote(piano.KEY_E3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //on...
      piano.playNote(piano.KEY_F3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //ly
      piano.playNote(piano.KEY_G3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //whis...
      piano.playNote(piano.KEY_G3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //pers
      piano.playNote(piano.KEY_F3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //of
      piano.playNote(piano.KEY_F3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //some
      piano.playNote(piano.KEY_E3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //qui...
      piano.playNote(piano.KEY_D3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //et
      piano.playNote(piano.KEY_D3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //con...
      piano.playNote(piano.KEY_D3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //ver...
      piano.playNote(piano.KEY_C3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //sa...
      piano.playNote(piano.KEY_E3, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));
      piano.playNote(piano.KEY_E3, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_D3, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_C3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //tion
      piano.playNote(piano.KEY_D3, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));
      wait(piano.NOTE_HALF);

      piano.playNote(piano.KEY_D3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_C3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_F3, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));

      wait(piano.NOTE_QUARTER);
      //She's
      piano.playNote(piano.KEY_G3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //com...
      piano.playNote(piano.KEY_G3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //ing
      piano.playNote(piano.KEY_G3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //in
      piano.playNote(piano.KEY_G3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //twelve
      piano.playNote(piano.KEY_G3, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //thir...
      piano.playNote(piano.KEY_A4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //ty
      piano.playNote(piano.KEY_B4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

    }
};
