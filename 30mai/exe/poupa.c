#include <stdio.h>

int poup();

int main()
{

  printf("Foram necessarios %d meses\n", poup(20000, 19000, .5, 910));

  return 0;
}

int poup(double total, double inicial, double taxa, double cadaMes)
{
  double soma = inicial;
  int meses = 0;

  while (soma < total)
  {
    soma += (soma) * (taxa / 100) + cadaMes;
    meses++;
  }

  return meses;
}
