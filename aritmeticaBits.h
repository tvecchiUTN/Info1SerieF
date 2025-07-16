#ifndef __ARITMETICABITS_H
#define __ARITMETICABITS_H

uint32_t nibMenS(uint32_t val, int n);
uint32_t nibMasS(uint32_t val, int n);
uint32_t nibMasMenS(int eleccion, uint32_t val, int n);

uint32_t nibCero(uint32_t val, int n);
uint32_t nibValor(uint32_t val, int n, int num);

uint32_t bitVar(uint32_t val, int n);

void colocarUno(uint32_t *var, int bit);
void colocarCero(uint32_t *var, int bit);
void conmutador(uint32_t *var, int bit);

#endif
