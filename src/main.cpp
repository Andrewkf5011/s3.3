#include "mbed.h"
#include "components.h"

AssignmentBoard board;

Button fire(board.SHIELD_SW_CENTER, false);
LED green(board.SHIELD_GREEN_LED);

Speaker speaker(board.SHIELD_SPEAKER);

int main()
{
    while (1)
    {
        float f;

        green.on();

        for (f=20.0; f<20.0e3; f+=100)
        {
            speaker.pwmOut.period(1.0/f);

            speaker.play();

            wait(0.1);
        }

        speaker.stop();

        green.off();

        while(!(fire.digitalIn));
    }
}

//https://docs.mbed.com/docs/mbed-os-api-reference/en/5.1/APIs/io/PwmOut/
//http://aquaticus.info/pwm-music
