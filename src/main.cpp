#include <cmath>
#include "mbed.h"
#include "music.h"
#include "components.h"

/**
 * An Example program to use the speaker on the application shield.
 * (Plays the Darth Vader theme)
 *
 * Version: 2.11
 * Date: 30/03/2018
 * Originally Created: 25/03/2018
 */

//[board] This is the board that this program will use.
AssignmentBoard board;

//[replay] This is the button used to replay the song.
Button replay(board.SHIELD_SW_CENTER, false);

//[green] An LED used to indicate when the song has finished.
LED green(board.SHIELD_GREEN_LED);

//[piano] This is the piano to play the song on.
Piano piano(Speaker(board.SHIELD_SPEAKER));

//[starWarsMusic] This is the song to be played. (How exciting!)
StarWars starWarsMusic(piano, piano.TEMPO_VIVACE);

/**
 * @brief Plays the song, then waits for the user to replay it.
 */
int main()
{
    //Main program loop
    while (1)
    {
        green.on();

        starWarsMusic.playSong();

        green.off();

        //Wait until the user wants to replay the song.
        while(!(replay.digitalIn));
    }
}
