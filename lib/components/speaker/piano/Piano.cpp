#include "Piano.h"
#include "Speaker.h"
#include <mbed.h>

Piano::Piano(Speaker speaker) : speaker(speaker)
{
}

float Piano::getFrequency(float key)
{
  float frequency = pow(2.0, ((key - 49)/12)) * 440;

  return frequency;
}

void Piano::playNote(float key, float noteDuration)
{
  Piano::speaker.pwmOut.period(1/ Piano::getFrequency(key));
  Piano::speaker.play();
  wait(noteDuration);
  Piano::speaker.stop();
}

//Constant declarations (Piano Keys).

//Group 0: 16.3516hz to 25.9565hz
const float Piano::KEY_C0 = 89.0;
const float Piano::KEY_C0_SHARP = 90.0;
const float Piano::KEY_D0 = 91.0;
const float Piano::KEY_D0_SHARP = 92.0;
const float Piano::KEY_E0 = 93.0;
const float Piano::KEY_F0 = 94.0;
const float Piano::KEY_F0_SHARP = 95.0;
const float Piano::KEY_G0 = 96.0;
const float Piano::KEY_G0_SHARP = 97.0;

//Group 1: 27.5000hz to 51.9131hz
const float Piano::KEY_A1 = 1.0;
const float Piano::KEY_A1_SHARP = 2.0;
const float Piano::KEY_B1 = 3.0;
const float Piano::KEY_C1 = 4.0;
const float Piano::KEY_C1_SHARP = 5.0;
const float Piano::KEY_D1 = 6.0;
const float Piano::KEY_D1_SHARP = 7.0;
const float Piano::KEY_E1 = 8.0;
const float Piano::KEY_F1 = 9.0;
const float Piano::KEY_F1_SHARP = 10.0;
const float Piano::KEY_G1 = 11.0;
const float Piano::KEY_G1_SHARP = 12.0;

//Group 2: 55.0000hz to 103.826hz
const float Piano::KEY_A2 = 13.0;
const float Piano::KEY_A2_SHARP = 14.0;
const float Piano::KEY_B2 = 15.0;
const float Piano::KEY_C2 = 16.0;
const float Piano::KEY_C2_SHARP = 17.0;
const float Piano::KEY_D2 = 18.0;
const float Piano::KEY_D2_SHARP = 19.0;
const float Piano::KEY_E2 = 20.0;
const float Piano::KEY_F2 = 21.0;
const float Piano::KEY_F2_SHARP = 22.0;
const float Piano::KEY_G2 = 23.0;
const float Piano::KEY_G2_SHARP = 24.0;

//Group 3: 110.000hz to 207.652hz
const float Piano::KEY_A3 = 25.0;
const float Piano::KEY_A3_SHARP = 26.0;
const float Piano::KEY_B3 = 27.0;
const float Piano::KEY_C3 = 28.0;
const float Piano::KEY_C3_SHARP = 29.0;
const float Piano::KEY_D3 = 30.0;
const float Piano::KEY_D3_SHARP = 31.0;
const float Piano::KEY_E3 = 32.0;
const float Piano::KEY_F3 = 33.0;
const float Piano::KEY_F3_SHARP = 34.0;
const float Piano::KEY_G3 = 35.0;
const float Piano::KEY_G3_SHARP = 36.0;

//Group 4: 220.000hz to 415.305hz
const float Piano::KEY_A4 = 37.0;
const float Piano::KEY_A4_SHARP = 38.0;
const float Piano::KEY_B4 = 39.0;
const float Piano::KEY_C4 = 40.0;
const float Piano::KEY_C4_SHARP = 41.0;
const float Piano::KEY_D4 = 42.0;
const float Piano::KEY_D4_SHARP = 43.0;
const float Piano::KEY_E4 = 44.0;
const float Piano::KEY_F4 = 45.0;
const float Piano::KEY_F4_SHARP = 46.0;
const float Piano::KEY_G4 = 47.0;
const float Piano::KEY_G4_SHARP = 48.0;

//Group 5: 440.000hz to 830.609hz
const float Piano::KEY_A5 = 49.0;
const float Piano::KEY_A5_SHARP = 50.0;
const float Piano::KEY_B5 = 51.0;
const float Piano::KEY_C5 = 52.0;
const float Piano::KEY_C5_SHARP = 53.0;
const float Piano::KEY_D5 = 54.0;
const float Piano::KEY_D5_SHARP = 55.0;
const float Piano::KEY_E5 = 56.0;
const float Piano::KEY_F5 = 57.0;
const float Piano::KEY_F5_SHARP = 58.0;
const float Piano::KEY_G5 = 59.0;
const float Piano::KEY_G5_SHARP = 60.0;

//Group 6: 880.000hz to 1661.22hz
const float Piano::KEY_A6 = 61.0;
const float Piano::KEY_A6_SHARP = 62.0;
const float Piano::KEY_B6 = 63.0;
const float Piano::KEY_C6 = 64.0;
const float Piano::KEY_C6_SHARP = 65.0;
const float Piano::KEY_D6 = 66.0;
const float Piano::KEY_D6_SHARP = 67.0;
const float Piano::KEY_E6 = 68.0;
const float Piano::KEY_F6 = 69.0;
const float Piano::KEY_F6_SHARP = 70.0;
const float Piano::KEY_G6 = 71.0;
const float Piano::KEY_G6_SHARP = 72.0;

//Group 7: 1760.00hz to 3322.44hz
const float Piano::KEY_A7 = 73.0;
const float Piano::KEY_A7_SHARP = 74.0;
const float Piano::KEY_B7 = 75.0;
const float Piano::KEY_C7 = 76.0;
const float Piano::KEY_C7_SHARP = 77.0;
const float Piano::KEY_D7 = 78.0;
const float Piano::KEY_D7_SHARP = 79.0;
const float Piano::KEY_E7 = 80.0;
const float Piano::KEY_F7 = 81.0;
const float Piano::KEY_F7_SHARP = 82.0;
const float Piano::KEY_G7 = 83.0;
const float Piano::KEY_G7_SHARP = 84.0;

//Group 8: 3520.00hz to 6644.88hz
const float Piano::KEY_A8 = 85.0;
const float Piano::KEY_A8_SHARP = 86.0;
const float Piano::KEY_B8 = 87.0;
const float Piano::KEY_C8 = 88.0;
const float Piano::KEY_C8_SHARP = 98.0;
const float Piano::KEY_D8 = 99.0;
const float Piano::KEY_D8_SHARP = 100.0;
const float Piano::KEY_E8 = 101.0;
const float Piano::KEY_F8 = 102.0;
const float Piano::KEY_F8_SHARP = 103.0;
const float Piano::KEY_G8 = 104.0;
const float Piano::KEY_G8_SHARP = 105.0;

//Group 9: 7040.00hz to 7902.13hz
const float Piano::KEY_A9 = 106.0;
const float Piano::KEY_A9_SHARP = 107.0;
const float Piano::KEY_B9 = 108.0;
