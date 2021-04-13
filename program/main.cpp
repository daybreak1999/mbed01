#include "mbed.h"

DigitalOut myLED1(LED1);
DigitalOut myLED3(LED3);

int main()
{
    while (1)
   {
      myLED1 = 0;  // set LED2 pin to high
      myLED3 = 1; // set LED1 pin to low
      ThisThread::sleep_for(0.5s);
      myLED3.write(0);  // set LED2 pin to low
      ThisThread::sleep_for(0.5s);
      
      myLED3.write(1); // set LED1 pin to high
      ThisThread::sleep_for(0.5s);
      myLED3.write(0);  // set LED2 pin to low
      ThisThread::sleep_for(0.5s);
      



      
      myLED3.write(1); // set LED1 pin to high
      ThisThread::sleep_for(0.5s);
      myLED3.write(0);  // set LED2 pin to low
      myLED1.write(1); 
      ThisThread::sleep_for(0.5s);
      myLED1.write(0);
      ThisThread::sleep_for(0.5s);
      myLED1.write(1); 
      ThisThread::sleep_for(0.5s);
   }
}