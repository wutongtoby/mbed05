#include "mbed.h"


Ticker time_up;

DigitalOut redLED(LED1);


void blink(){

    redLED = !redLED;

}


int main(){

    time_up.attach( &blink, 0.2 );
    // ticker is different from timeout and interruptIn
    // will automatically excuted every 0.2 second
    while(1);

}
