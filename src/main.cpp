#include <cmath>
#include "mbed.h"
#include "components.h"
#include "music.h"

/**
 * An Example program to use the speaker on the application shield.
 * (Plays the "Africa" by Toto)
 *
 * Version: 3.1
 * Date: 02/04/2018
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

//[africaByToto] This is the song to be played. (How exciting!)
StarWars africaByToto(piano, piano.TEMPO_PRESTO);

/**
 * @brief Plays the song, then waits for the user to replay it.
 */
int main()
{
    //Main program loop
    while (1)
    {
        //Wait until the user wants to play the song.
        while(!(replay.digitalIn));

        green.on();

        africaByToto.playSong();

        green.off();

    }
}
