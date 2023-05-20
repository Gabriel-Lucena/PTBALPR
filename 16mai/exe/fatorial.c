#include <stdio.h>

int fatorial(int numero);

int main()
{
  int numero;

  scanf("%d", &numero);

  printf("%d\n", fatorial(numero));

  return 0;
}

int fatorial(int numero)
{

  if (numero <= 0)
  {
    return 1;
  }

  return numero * fatorial(numero - 1);
}