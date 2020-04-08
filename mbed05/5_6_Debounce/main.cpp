#include "mbed.h"


Timer debounce;

InterruptIn button(SW2);

DigitalOut redLED(LED1);


void toggle(){
// so it will detect that since you press the 
// button at last time, how many ms has past
// if time past < 1sec then will do nothing
    if(debounce.read_ms()>1000){

        redLED = !redLED;

        debounce.reset();

    }

}


int main(){

    debounce.start();

    button.rise(&toggle);

    while(1);

}
