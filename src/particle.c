//particle.c
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "particle.h"

#define PARTICLE_NUM            5
#define PARTICLE_MAX_RADIUS     500
#define PARTICLE_SPACE_X_SIZE   1000    //the total canvas size in X
#define PARTICLE_SPACE_Y_SIZE   1000    //the total canvas size in Y

static Particle_t _particles[PARTICLE_NUM];
static uint8_t incrementVelocity(void)
{
    return rand() % 10;
}

//Public API start
void particle_print(void)
{
    uint32_t i;

    for(i=0 ; i<PARTICLE_NUM ; i++){        
        // printf("Radius=%i,Vel=%i X=%i Y=%i\r\n", _particles[i].radius, _particles[i].velocity, _particles[i].centerPosX, _particles[i].centerPosY);
        printf("p=%i:%i,%i\r\n", i, _particles[i].centerPosX, _particles[i].centerPosY);
    }    
}

void calculate_dXdY(uint16_t *pdX, uint16_t *pdY)
{
    //check if not null :V
    *pdX = incrementVelocity();
    *pdY = incrementVelocity();
}

void particle_process(void)
{
    uint32_t i;

    for(i=0 ; i<PARTICLE_NUM ; i++){
       _particles[i].centerPosX += rand() % 5; //_particles[i].dX;
       _particles[i].centerPosY += rand() % 5; //_particles[i].dY;
    
        particle_print();
    }
}

void particle_init(void)
{
    uint32_t i;

    for(i=0 ; i<PARTICLE_NUM ; i++){
        _particles[i].radius = rand() % PARTICLE_MAX_RADIUS;                        
        _particles[i].velocity = 1;
        _particles[i].centerPosX = rand() % PARTICLE_SPACE_X_SIZE;
        _particles[i].centerPosY = rand() % PARTICLE_SPACE_Y_SIZE;
        _particles[i].dX = 1;
        _particles[i].dY = 1;
        _particles[i].lifeCycle = rand() % 10;
    }
}

