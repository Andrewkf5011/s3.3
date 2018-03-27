#include "mbed.h"
#include "components.h"
#include <cmath>

AssignmentBoard board;

Button fire(board.SHIELD_SW_CENTER, false);
LED green(board.SHIELD_GREEN_LED);

Speaker speaker(board.SHIELD_SPEAKER);

float getFrequency(float key)
{
  float frequency = pow(2.0, ((key - 49)/12)) * 440;

  printf("Key %f = frequecncy: %f \n",  key, frequency );

  return frequency;
}

void playNote(float key, float length)
{


  speaker.pwmOut.period(1/getFrequency(key));
  speaker.play();

  wait(length);

  speaker.stop();
}

int main()
{
    while (1)
    {

        green.on();

        // for (f=20.0; f<20.0e3; f+=100)
        // {
        //     speaker.pwmOut.period(1.0/f);
        //
        //     speaker.play();
        //
        //     wait(0.1);
        // }

        //First line
        playNote(47, 0.25); //G
        playNote(47, 0.25); //G
        playNote(47, 0.25); //G

        playNote(52, 0.5); //C

        playNote(59, 0.5); //G

        playNote(58, 0.25); //F
        playNote(57, 0.25); //E
        playNote(56, 0.25); //D

        playNote(64, 0.5); //C

        playNote(59, 0.5); //G

        playNote(58, 0.25); //F
        playNote(57, 0.25); //E
        playNote(56, 0.25); //D

        playNote(64, 0.5); //C

        playNote(59, 0.5); //G

        playNote(58, 0.25); //F
        playNote(57, 0.25); //E
        playNote(58, 0.25); //F
        playNote(57, 1); //E

        playNote(47, 0.25); //G
        playNote(47, 0.25); //G
        playNote(47, 0.5); //G

        playNote(52, 0.5); //C

        playNote(59, 0.5); //G

        playNote(58, 0.25); //F
        playNote(57, 0.25); //E
        playNote(56, 0.5); //D

        playNote(64, 0.5); //C

        playNote(59, 0.5); //G

        playNote(58, 0.25); //F
        playNote(57, 0.25); //E
        playNote(56, 0.5); //D

        playNote(64, 0.5); //C

        playNote(59, 0.5); //G

        playNote(58, 0.25); //F
        playNote(57, 0.25); //E
        playNote(58, 0.5); //F
        playNote(57, 1); //E


        green.off();

        speaker.stop();



        while(!(fire.digitalIn));
    }
}

//https://docs.mbed.com/docs/mbed-os-api-reference/en/5.1/APIs/io/PwmOut/
//http://aquaticus.info/pwm-music
