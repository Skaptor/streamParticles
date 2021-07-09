//main.c
#include <stdio.h>
#include "particle.h"

int main(void)
{
    particle_init();

    printf("Hello World! alekey y ware :V\r\n");

    uint32_t times = 10;

    while(times--){
        particle_process();
    }


    return 0;
}
