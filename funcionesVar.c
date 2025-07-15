#include <stdio.h>
#include <stdint.h>
#include <math.h>


uint32_t posNibMenSig(uint32_t numero, int pos);
uint32_t posNibMasSig(uint32_t numero, int pos);
int cuentaCaractHexa(uint32_t num);
uint32_t modificador(uint32_t num, unsigned int pos);
int main()
{



    printf("%d", modificador(0x12345678, 4));






    return 0;
}

uint32_t posNibMenSig(uint32_t numero, int pos)
{
    uint32_t ret = 0x00;
    int cdaCaract = cuentaCaractHexa(numero);

    if (pos <= cdaCaract)
    {
        ret = numero >> (pos*4);
        ret = ret << ((cdaCaract-1)*4);
        ret = ret >> ((cdaCaract-1)*4);
    }else
    {
        ret = -1;
    }
    return ret;
}

uint32_t posNibMasSig(uint32_t numero, int pos)
{
    uint32_t ret = 0x00;
    int cdaCaract = cuentaCaractHexa(numero);

    if (pos <= cdaCaract)
    {
        ret = numero << (pos*4);
        ret = ret >> ((cdaCaract-1)*4);
    }else
    {
        ret = -1;
    }
    return ret;
}

int cuentaCaractHexa(uint32_t num)
{

    int ret = 0;
    int var = 0;
    var = num;

    while(var > 0)
    {
        var = var/16;
        ret++;
    }

    return ret;
}

uint32_t modificador(uint32_t num, unsigned int pos)
{
    uint32_t ret = 0x00;

    uint32_t base = 0xFFFFFFFF;



    uint32_t mask = 0x00;

    ret = num & mask;

    return ret;
}
