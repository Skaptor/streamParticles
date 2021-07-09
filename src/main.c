//main.c
#include <stdio.h>
#include "particle.h"

int main(void)
{
    particle_init();

    printf("como no apestar en VSCODE :V\r\n");    

    uint32_t times = 10;

    while(times--){
        particle_process();
    }


    return 0;
}
