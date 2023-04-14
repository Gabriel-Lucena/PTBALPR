#include <stdio.h>

int main()
{

  int inteiro1, inteiro2, inteiro3, maior;

  printf("Digite o 1 valor: ");
  scanf("%d", &inteiro1);

  printf("Digite o 2 valor: ");
  scanf("%d", &inteiro2);

  printf("Digite o 3 valor: ");
  scanf("%d", &inteiro3);

  if (inteiro1 > inteiro2)
  {

    maior = inteiro1;
  }
  else
  {
    maior = inteiro2;
  }

  if (maior > inteiro3)
  {
    printf("O maior valor e: %d", maior);
  }
  else
  {

    printf("O maior valor e: %d", inteiro3);
  }

  return 0;
}