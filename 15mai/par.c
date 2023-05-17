#include <stdio.h>

void parImpar(int numero)
{
  if (numero % 2 == 1)
  {
    printf("%d e' um n'umero i'mpar.", numero);
  }
  else
  {
    printf("%d e' um n'umero par.", numero);
  }
}

int main()
{
  int numero;
  scanf("%d", &numero);

  parImpar(numero);

  return 0;
}