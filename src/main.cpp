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


        playNote(66, 2); //D
        playNote(66, 2); //A
        playNote(71, 0.5) //G
        playNote(69, )


        // playNote(64); //C
        // playNote(63); //B
        // playNote(61); //A
        // playNote(66); //D
        // playNote(64); //C
        // playNote(63); //B
        // playNote(61); //A
        // playNote(66); //D


        green.off();

        speaker.stop();



        while(!(fire.digitalIn));
    }
}

//https://docs.mbed.com/docs/mbed-os-api-reference/en/5.1/APIs/io/PwmOut/
//http://aquaticus.info/pwm-music
