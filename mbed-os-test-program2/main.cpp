#include "mbed.h"

DigitalOut myLED(LED1);
DigitalOut myLED2(LED3);

void Led(DigitalOut &ledpin);

int main()
{
   myLED = 0;
   myLED2 = 0;
   while (true)
   {
      Led(myLED2);
      Led(myLED2);
      Led(myLED2);
      Led(myLED);
      Led(myLED);
   }
}