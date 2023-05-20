#include <stdio.h>

int potencia(double base, int expoente);

int main()
{
  double base = 2.1;
  int expoente = 3;



  printf("%g elevado a %d e' %g", base, expoente, potencia(base, expoente));

  return 0;
}

int potencia(double base, int expoente)
{
  if (expoente == 1)
  {
    return base;
  }

  return base * potencia(base, expoente - 1);
}