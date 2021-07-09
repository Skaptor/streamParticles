#ifndef PARTICLE_H
#define PARTICLE_H

#include <stdint.h>

typedef struct _particle
{    

    uint8_t     radius;
    double      velocity;

    uint16_t    lifeCycle;
    uint16_t    centerPosX;
    uint16_t    centerPosY;
    uint16_t    dX;
    uint16_t    dY;
}Particle_t;

void particle_print(void);
void particle_process(void);
void particle_init(void);

#endif
