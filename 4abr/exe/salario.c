#include <stdio.h>

int main()
{
  double salarioFixo, totalVendas;

  printf("Salario fixo: ");
  scanf("%lf", &salarioFixo);

  printf("Valor das vendas: ");
  scanf("%lf", &totalVendas);

  if (totalVendas <= 1500)
  {
    printf("Salario total = %g", salarioFixo + .03 * totalVendas);
  }
  else
  {
    printf("Salario total = %g", salarioFixo + .05 * (totalVendas - 1500) + .03 * 1500);
  }

  return 0;
}