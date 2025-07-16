#include <stdio.h>
#include <stdint.h>
#include "aritmeticaBits.h"

int main(void)
{
    uint32_t valor1 = 0x12345678;

    uint32_t res;



    for(int i = 0; i<8; i++)
    {
        for(int j = 0; j<9; j++)
        {
            res = nibValor(valor1, i, j);
            printf("%x\n", res);
        }
        printf("\n");
    }





    return 0;
}
