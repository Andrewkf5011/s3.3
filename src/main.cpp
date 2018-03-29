#include <cmath>
#include "mbed.h"
#include "components.h"
#include "music.h"

AssignmentBoard board;

Button fire(board.SHIELD_SW_CENTER, false);
LED green(board.SHIELD_GREEN_LED);

Piano piano(Speaker(board.SHIELD_SPEAKER));
StarWars starWarsMusic(piano, piano.TEMPO_VIVACE);

int main()
{
    while (1)
    {
        green.on();

        starWarsMusic.playSong();

        green.off();

        while(!(fire.digitalIn));
    }
}
