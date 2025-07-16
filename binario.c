#include <stdio.h>
#include <stdint.h>
#include "binario.h"
#include "aritmeticaBits.h"

void aBinario(uint32_t val)
{
    for(int i = 31; i>=0; i--){
        uint32_t ret = bitVar(val, i);
        printf("%x", ret);
    }

    printf("\n");
}
