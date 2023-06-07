#include <stdio.h>

#define TAMANHO 20

int main()
{
  int vetor[TAMANHO];

  for (int i = 0; i < TAMANHO; i++)
  {
    int numero;

    printf("Digite um nu'mero: ");
    scanf("%d", &numero);

    if (numero < 0)
    {
      vetor[i] = 0;
    }
    else
    {
      vetor[i] = numero;
    }
  }

  for (int i = 0; i < TAMANHO; i++)
  {
    printf("\nVetor[%d]: %d", i, vetor[i]);
  }

  return 0;
}