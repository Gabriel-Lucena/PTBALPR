#include <stdio.h>

int main(void)
{
  double valDol, valBrl, quantDol;

  printf("Valor do dolar: ");
  scanf("%lf", &valDol);

  printf("Quantidade de dolares: ");
  scanf("%lf", &quantDol);

  valBrl = quantDol * valDol;

  printf("R$ %g", valBrl);

  return 0;
}