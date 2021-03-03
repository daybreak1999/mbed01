#include "mbed.h"

void Led(DigitalOut &ledpin)
{
      ledpin = !ledpin; // toggle led
      ThisThread::sleep_for(200ms);
      ledpin = !ledpin; // toggle led
      ThisThread::sleep_for(200ms);
}