#include <stdio.h>
#include <stdint.h>
#include "aritmeticaBits.h"

#define NIB 4

//----------------------------------------------------Ejericio 1-------------------------------------------------------
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
//----------------------------------------------------Ejericio 1-------------------------------------------------------



//----------------------------------------------------Ejericio 2-------------------------------------------------------
uint32_t nibCero(uint32_t val, int n)
{
    uint32_t ret;

    uint32_t aux = 0x0000000F;

    aux = aux << (n * NIB);

    uint32_t mask = val & aux;

    mask = ~mask;

    ret = val & mask;

    return ret;
}

uint32_t nibValor(uint32_t val, int n, int num)
{
    uint32_t ret;

    uint32_t aux = 0x0000000F;

    num = num << (n*NIB);

    aux = aux << (n * NIB);

    uint32_t mask = val & aux;

    mask = ~mask;

    ret = val & mask;

    ret = ret | num;

    return ret;
}
//----------------------------------------------------Ejericio 2-------------------------------------------------------

//----------------------------------------------------Ejericio 3-------------------------------------------------------
