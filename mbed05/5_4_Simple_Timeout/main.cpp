#include "mbed.h"


Timeout tout;
DigitalIn button(SW2);
DigitalOut redLED(LED1);

void blink(){
    redLED = 0;
    wait(0.5);
    redLED = 1;
}

int main(){
    for(redLED=1; ; ){
        if(button==0){
            tout.attach(&blink, 2.0);
	    // attach a mission that will be 
	    // executed 2 second later
        }
        wait(0.2);
    }
}
