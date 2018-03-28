#include "Piano.h"
#include "Speaker.h"
#include <mbed.h>

Piano::Piano(Speaker speaker)
{
  Piano::speaker = speaker;
}

float Piano::getFrequency(float key)
{
  float frequency = pow(2.0, ((key - 49)/12)) * 440;

  return frequency;
}

void playNote(float key, float noteDuration)
{
  Piano::speaker.pwmOut.period(1/getFrequency(key));
  Piano::speaker.play();
  wait(noteDuration);
  Piano::speaker.stop();
}
