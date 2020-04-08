#include "mbed.h"


InterruptIn button(SW2);

DigitalOut led(LED1);


void ISR1(){

    led = !led;

}


int main(){

    // just set the things to do when button is rise
    // by giving a funciton pointer
    button.rise(&ISR1);
    // other option for button is: "fall"
    while(1);
}
