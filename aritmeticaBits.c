#include <stdio.h>
#include <stdint.h>
#include "aritmeticaBits.h"

#define NIB 4

uint32_t nibMenS(uint32_t val, int n)
{
    uint32_t ret;
    uint32_t mask = 0x0000000F;
    mask = mask << (n*NIB);

    ret = val & mask;
    ret = ret >> (n*NIB);
    return ret;
}

uint32_t nibMasS(uint32_t val, int n)
{
    int32_t ret;
    uint32_t mask = 0x0000000F;
    mask = mask << (7*NIB);
    mask = mask >> (n*NIB);


    ret = val & mask;
    ret = ret >> (7-n)*NIB;
    return ret;
}

uint32_t nibMasMenS(int eleccion, uint32_t val, int n)
{
    uint32_t ret;
    if(eleccion >= 0)
    {
        ret = nibMasS(val, n);
    }
    else
    {
        ret = nibMenS(val, n);
    }

    return ret;
}
