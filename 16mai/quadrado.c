#include <stdio.h>

int sqrInt(int inteiro);

int main()
{
  int numero;
  scanf("%d", &numero);

  printf("%d", sqrInt(numero));

  return 0;
}

int sqrInt(int inteiro)
{
  return inteiro * inteiro;
}