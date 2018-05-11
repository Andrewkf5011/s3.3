#include "Song.h"
#include "Piano.h"
#include<mbed.h>
#include<stdbool.h>

/**
 * @brief The sheet music for the Darth Vader theme from StarWars.
 *
 * Version: 1.3
 * Date: 29/03/2018
 * Originally Created: 27/03/2018
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
        piano.playNote(piano.KEY_B6, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
        piano.playNote(piano.KEY_E6, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));
        wait(1);

        piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
        piano.playNote(piano.KEY_C4_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
        piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
        piano.playNote(piano.KEY_B4, piano.calculateNoteDuration(piano.NOTE_WHOLE, tempo));

    }
};



/**
 * @brief The sheet music for the Africa by Toto.
 * https://www.musicnotes.com/sheetmusic/mtd.asp?ppn=MN0137861
 *
 * Version: 1.2
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
     * @brief This is the intro to the song.
     */
    void playIntro()
    {
      //I
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //hear
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      //the
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      //drums
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));

      //ech...
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //o...
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //in'
      piano.playNote(piano.KEY_A5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //to...
      piano.playNote(piano.KEY_B5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //night
      piano.playNote(piano.KEY_C5, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));
      wait(piano.calculateNoteDuration(piano.NOTE_HALF, tempo));

      //she
      piano.playNote(piano.KEY_E4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //hears
      piano.playNote(piano.KEY_E4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //on...
      piano.playNote(piano.KEY_F4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //ly
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //whis...
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //pers
      piano.playNote(piano.KEY_F4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //of
      piano.playNote(piano.KEY_F4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //some
      piano.playNote(piano.KEY_E4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //qui...
      piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //et
      piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //con...
      piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //ver...
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //sa...
      piano.playNote(piano.KEY_E4, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));
      piano.playNote(piano.KEY_E4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //tion
      piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));
      wait(piano.calculateNoteDuration(piano.NOTE_HALF, tempo));

      piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_F4, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));
    }

    /**
     * @brief This is the main section of the song.
     */
    void playMain()
    {
      wait(piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //She's
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //com...
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //ing
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //in
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //twelve
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //thir...
      piano.playNote(piano.KEY_A5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //ty
      piano.playNote(piano.KEY_B5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //flight.
      piano.playNote(piano.KEY_C5, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));
      wait(piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //As
      piano.playNote(piano.KEY_E4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //Moon...
      piano.playNote(piano.KEY_E4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //lit
      piano.playNote(piano.KEY_E4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //wings
      piano.playNote(piano.KEY_F4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //re...
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //flect
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //the
      piano.playNote(piano.KEY_F4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //stars
      piano.playNote(piano.KEY_F4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //that
      piano.playNote(piano.KEY_E4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //guide
      piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //me
      piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //toward
      piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //sal...
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //va...
      piano.playNote(piano.KEY_E4, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));
      piano.playNote(piano.KEY_E4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //tion.
      piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));
      wait(piano.calculateNoteDuration(piano.NOTE_HALF, tempo));

      piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_F4, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));

      wait(piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //I
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //stopped
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //an
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //old
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //man a...
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //long
      piano.playNote(piano.KEY_A5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //the
      piano.playNote(piano.KEY_B5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //way.
      piano.playNote(piano.KEY_C5, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));
      //Sure
      piano.playNote(piano.KEY_E4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //as
      piano.playNote(piano.KEY_E4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //hop...
      piano.playNote(piano.KEY_E4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      //ing
      piano.playNote(piano.KEY_E4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      //to
      piano.playNote(piano.KEY_E4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //find
      piano.playNote(piano.KEY_F4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //some
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //old
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //for...
      piano.playNote(piano.KEY_F4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //got...
      piano.playNote(piano.KEY_F4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      //ten
      piano.playNote(piano.KEY_E4, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      //words
      piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //or
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //an...
      piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //tient
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //mel...
      piano.playNote(piano.KEY_E4, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));
      piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //o...
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //dies
      piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));
      wait(piano.calculateNoteDuration(piano.NOTE_HALF, tempo));

      piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_F4, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));

      wait(piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //He
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //Turned
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //to
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //me
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //as
      piano.playNote(piano.KEY_G4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //if
      piano.playNote(piano.KEY_A5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //to
      piano.playNote(piano.KEY_B5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //say
      piano.playNote(piano.KEY_C5, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));
      wait(piano.calculateNoteDuration(piano.NOTE_HALF, tempo));

      //"Hur...
      piano.playNote(piano.KEY_E5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //ry
      piano.playNote(piano.KEY_E5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //boy,
      piano.playNote(piano.KEY_F5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //it's
      piano.playNote(piano.KEY_G5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //wait...
      piano.playNote(piano.KEY_G5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //ing
      piano.playNote(piano.KEY_F5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //there
      piano.playNote(piano.KEY_F5, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      //for
      piano.playNote(piano.KEY_E5, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      //you.
      piano.playNote(piano.KEY_F5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      piano.playNote(piano.KEY_F5, piano.calculateNoteDuration(piano.NOTE_WHOLE, tempo));
      wait(piano.calculateNoteDuration(piano.NOTE_WHOLE, tempo));
      wait(piano.calculateNoteDuration(piano.NOTE_WHOLE, tempo));

      //It's
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //gon...
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      //na
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      //take
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //a...
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //lot
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //to
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //drag
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      //me
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      //a...
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //way
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_HALF_DOTTED, tempo));
      //from
      piano.playNote(piano.KEY_A6, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //you.
      piano.playNote(piano.KEY_A6, piano.calculateNoteDuration(piano.NOTE_WHOLE, tempo));

      wait(piano.calculateNoteDuration(piano.NOTE_WHOLE, tempo));
      //There's
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //noth...
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      //ing
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      //that
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      //a
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));

      //hun...
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //dred
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //men
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //or
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //more
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER_DOTTED, tempo));
      //could
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      //ev...
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //er
      piano.playNote(piano.KEY_A6, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //do.
      piano.playNote(piano.KEY_A6, piano.calculateNoteDuration(piano.NOTE_WHOLE, tempo));

      wait(piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //I
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //bless
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //the
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //rains
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));
      //down
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //in
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //Af...
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_HALF_DOTTED, tempo));
      //ri...
      piano.playNote(piano.KEY_A6, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //ca.
      piano.playNote(piano.KEY_A6, piano.calculateNoteDuration(piano.NOTE_WHOLE, tempo));

      wait(piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //Gon...
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      //na
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      //take
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //some
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //time
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //to
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //do
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //the
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //things
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //we
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //nev...
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      //er
      piano.playNote(piano.KEY_A6, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      //had (for next 9 notes).
      piano.playNote(piano.KEY_A6, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));
      piano.playNote(piano.KEY_A6, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_G5, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_F5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));


      piano.playNote(piano.KEY_A6, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));
      piano.playNote(piano.KEY_A6, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_A6_SHARP, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_A6, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      piano.playNote(piano.KEY_G5, piano.calculateNoteDuration(piano.NOTE_HALF_DOTTED, tempo));
      wait(piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));

      piano.playNote(piano.KEY_D5, piano.calculateNoteDuration(piano.NOTE_QUARTER_DOTTED, tempo));
      piano.playNote(piano.KEY_D5, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_D5, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));

      piano.playNote(piano.KEY_D5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_C5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_F5, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));

      piano.playNote(piano.KEY_F5, piano.calculateNoteDuration(piano.NOTE_WHOLE, tempo));
      wait(piano.calculateNoteDuration(piano.NOTE_WHOLE, tempo));

      piano.playNote(piano.KEY_D5, piano.calculateNoteDuration(piano.NOTE_QUARTER_DOTTED, tempo));
      piano.playNote(piano.KEY_D5, piano.calculateNoteDuration(piano.NOTE_EIGHTH, tempo));
      piano.playNote(piano.KEY_D5, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));

      piano.playNote(piano.KEY_D5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_C5, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_F5, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));

      piano.playNote(piano.KEY_F5, piano.calculateNoteDuration(piano.NOTE_WHOLE, tempo));
      wait(piano.calculateNoteDuration(piano.NOTE_WHOLE, tempo));
    }

    void playEnding()
    {
      piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_WHOLE, tempo));

      piano.playNote(piano.KEY_D4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_C4, piano.calculateNoteDuration(piano.NOTE_QUARTER, tempo));
      piano.playNote(piano.KEY_F4, piano.calculateNoteDuration(piano.NOTE_HALF, tempo));

      piano.playNote(piano.KEY_F4, piano.calculateNoteDuration(piano.NOTE_WHOLE, tempo));
      wait(piano.calculateNoteDuration(piano.NOTE_WHOLE, tempo));
    }

    /**
     * @brief Plays the song.
     */
    void playSong()
    {
      playIntro();
      playMain();
      playMain();
      playEnding();
      playEnding();
      playEnding();
    }
};
