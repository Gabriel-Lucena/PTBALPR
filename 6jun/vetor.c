#include <stdio.h>

int main()
{

  int vetor[10];

  for (int i = 0; i < 10; i++)
  {
    printf("Digite um nu'mero: ");
    scanf("%d", &vetor[i]);
  }

  for (int i = 0; i < 10; i++)
  {
    printf("\nVetor[%d]: %d", i, vetor[i]);
  }

  return 0;
}