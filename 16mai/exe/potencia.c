#include <stdio.h>

int potencia(int base, int expoente);

int main()
{
  int base = 2;
  int expoente = 3;

  printf("%d elevado a %d e' %d", base, expoente, potencia(base, expoente));

  return 0;
}

int ozonio(int numero)
{
  return numero;
}

int potencia(int base, int expoente)
{
  if (expoente == 1)
  {
    return base;
  }

  return base * potencia(base, expoente - 1);
}