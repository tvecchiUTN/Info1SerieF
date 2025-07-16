#include <stdio.h>
#include <stdint.h>
#include "aritmeticaBits.h"
#include "binario.h"
int main(void)
{
    uint32_t valor1 = 3;

    //modificBit(&valor1, 0, 1);


    printf("%d\n", esPar(valor1));

    return 0;
}
