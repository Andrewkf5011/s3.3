#include <cmath>
#include<mbed.h>
#include "Speaker.h"

#ifndef PIANO_H
#define PIANO_H

class Piano
{
    private:
        Speaker speaker;
        float getFrequency(float key);

    public:
        Piano(Speaker speaker);
        void playNote(float key, float noteDuration);

        //Constant definitions (Piano Keys).

        //Group 0: 16.3516hz to 25.9565hz
        static const float KEY_C0;
        static const float KEY_C0_SHARP;
        static const float KEY_D0;
        static const float KEY_D0_SHARP;
        static const float KEY_E0;
        static const float KEY_F0;
        static const float KEY_F0_SHARP;
        static const float KEY_G0;
        static const float KEY_G0_SHARP;

        //Group 1: 27.5000hz to 51.9131hz
        static const float KEY_A1;
        static const float KEY_A1_SHARP;
        static const float KEY_B1;
        static const float KEY_C1;
        static const float KEY_C1_SHARP;
        static const float KEY_D1;
        static const float KEY_D1_SHARP;
        static const float KEY_E1;
        static const float KEY_F1;
        static const float KEY_F1_SHARP;
        static const float KEY_G1;
        static const float KEY_G1_SHARP;

        //Group 2: 55.0000hz to 103.826hz
        static const float KEY_A2;
        static const float KEY_A2_SHARP;
        static const float KEY_B2;
        static const float KEY_C2;
        static const float KEY_C2_SHARP;
        static const float KEY_D2;
        static const float KEY_D2_SHARP;
        static const float KEY_E2;
        static const float KEY_F2;
        static const float KEY_F2_SHARP;
        static const float KEY_G2;
        static const float KEY_G2_SHARP;

        //Group 3: 110.000hz to 207.652hz
        static const float KEY_A3;
        static const float KEY_A3_SHARP;
        static const float KEY_B3;
        static const float KEY_C3;
        static const float KEY_C3_SHARP;
        static const float KEY_D3;
        static const float KEY_D3_SHARP;
        static const float KEY_E3;
        static const float KEY_F3;
        static const float KEY_F3_SHARP;
        static const float KEY_G3;
        static const float KEY_G3_SHARP;

        //Group 4: 220.000hz to 415.305hz
        static const float KEY_A4;
        static const float KEY_A4_SHARP;
        static const float KEY_B4;
        static const float KEY_C4;
        static const float KEY_C4_SHARP;
        static const float KEY_D4;
        static const float KEY_D4_SHARP;
        static const float KEY_E4;
        static const float KEY_F4;
        static const float KEY_F4_SHARP;
        static const float KEY_G4;
        static const float KEY_G4_SHARP;

        //Group 5: 440.000hz to 830.609hz
        static const float KEY_A5;
        static const float KEY_A5_SHARP;
        static const float KEY_B5;
        static const float KEY_C5;
        static const float KEY_C5_SHARP;
        static const float KEY_D5;
        static const float KEY_D5_SHARP;
        static const float KEY_E5;
        static const float KEY_F5;
        static const float KEY_F5_SHARP;
        static const float KEY_G5;
        static const float KEY_G5_SHARP;

        //Group 6: 880.000hz to 1661.22hz
        static const float KEY_A6;
        static const float KEY_A6_SHARP;
        static const float KEY_B6;
        static const float KEY_C6;
        static const float KEY_C6_SHARP;
        static const float KEY_D6;
        static const float KEY_D6_SHARP;
        static const float KEY_E6;
        static const float KEY_F6;
        static const float KEY_F6_SHARP;
        static const float KEY_G6;
        static const float KEY_G6_SHARP;

        //Group 7: 1760.00hz to 3322.44hz
        static const float KEY_A7;
        static const float KEY_A7_SHARP;
        static const float KEY_B7;
        static const float KEY_C7;
        static const float KEY_C7_SHARP;
        static const float KEY_D7;
        static const float KEY_D7_SHARP;
        static const float KEY_E7;
        static const float KEY_F7;
        static const float KEY_F7_SHARP;
        static const float KEY_G7;
        static const float KEY_G7_SHARP;

        //Group 8: 3520.00hz to 6644.88hz
        static const float KEY_A8;
        static const float KEY_A8_SHARP;
        static const float KEY_B8;
        static const float KEY_C8;
        static const float KEY_C8_SHARP;
        static const float KEY_D8;
        static const float KEY_D8_SHARP;
        static const float KEY_E8;
        static const float KEY_F8;
        static const float KEY_F8_SHARP;
        static const float KEY_G8;
        static const float KEY_G8_SHARP;

        //Group 9: 7040.00hz to 7902.13hz
        static const float KEY_A9;
        static const float KEY_A9_SHARP;
        static const float KEY_B9;

        //Constant definitions (Notes).
        static const float NOTE_WHOLE; //(Semibreve)
        static const float NOTE_WHOLE_DOTTED; //(Semibreve)
        static const float NOTE_HALF; //(Minim)
        static const float NOTE_HALF_DOTTED; //(Minim)
        static const float NOTE_QUARTER; //(Crotchet)
        static const float NOTE_QUARTER_DOTTED; //(Crotchet)
        static const float NOTE_EIGHTH; //(Quaver)
        static const float NOTE_EIGHTH_DOTTED; //(Quaver)
        static const float NOTE_SIXTEENTH; //(Semiquaver)
        static const float NOTE_SIXTEENTH_DOTTED; //(Semiquaver)

        //Constant definitions (Tempos).
        static const float TEMPO_LARGO; //(Very Slow)
        static const float TEMPO_ADAGIO; //(Slow)
        static const float TEMPO_ANDANTE; //(Moderate)
        static const float TEMPO_ALLEGRO; //(Fast)
        static const float TEMPO_VIVACE; //(Lively)
        static const float TEMPO_PRESTO; //(Very Fast)
};

#endif // PIANO_H
