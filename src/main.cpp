#include "mbed.h"
#include "components.h"
#include <cmath>

AssignmentBoard board;

Button fire(board.SHIELD_SW_CENTER, false);
LED green(board.SHIELD_GREEN_LED);

Speaker speaker(board.SHIELD_SPEAKER);
Piano piano(speaker);

void starWars()
{
  //First line
  piano.playNote(piano.KEY_A4, 0.5);
  piano.playNote(piano.KEY_A4, 0.5);
  piano.playNote(piano.KEY_A4, 0.5);
  
  piano.playNote(piano.KEY_F3, 0.25);
  piano.playNote(piano.KEY_C4, 0.25);

  piano.playNote(piano.KEY_A4, 0.5);

  piano.playNote(piano.KEY_F3, 0.25);
  piano.playNote(piano.KEY_C4, 0.25);

  piano.playNote(piano.KEY_A4, 0.75);

  //Second line
  piano.playNote(piano.KEY_E4, 0.5);
  piano.playNote(piano.KEY_E4, 0.5);
  piano.playNote(piano.KEY_E4, 0.5);

  piano.playNote(piano.KEY_F3, 0.25);
  piano.playNote(piano.KEY_C4, 0.25);

  piano.playNote(piano.KEY_A4, 0.5);

  piano.playNote(piano.KEY_F3, 0.25);
  piano.playNote(piano.KEY_C4, 0.25);

  piano.playNote(piano.KEY_A4, 0.75);
}

int main()
{
    while (1)
    {
        green.on();

        starWars();

        green.off();

        speaker.stop();

        while(!(fire.digitalIn));
    }
}
