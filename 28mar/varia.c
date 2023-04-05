#include <stdio.h>

int main()
{

  double brlToUss, uss, brl;

  printf("Digite o valor do dol: \n");
  scanf("%lf", &brlToUss);

  printf("Digite a quantidade de dol: \n");
  scanf("%lf", &uss);

  brl = uss * brlToUss;

  printf("US$ %g = BRL %g\n", uss, brl);

  /*

    Comentário em bloco

  */

  int num1, num2, soma;

  printf("Digite o primeiro numero: \n");
  scanf("%d", &num1);

  printf("Digite o segundo numero: \n");
  scanf("%d", &num2);

  soma = num1 + num2;

  printf("A soma e: %d\n", soma);

  return 0;
}