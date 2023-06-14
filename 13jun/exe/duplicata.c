#include <stdio.h>

void duplicata(int vetor[], int tamanho);

void duplicata(int vetor[], int tamanho)
{
  for (int i = 0; i < tamanho; i++)
  {
    if (i == 0)
    {
      printf("%g", vetor[i]);
    }
    else
    {

      int boolean = 0;

      for (int j = i - 1; j <= 0; j--)
      {

        if (vetor[i] == vetor[j])
        {
          break;
        }
        else
        {
          boolean = 1;
        }
      }

      if (boolean)
      {
        printf("%g", vetor[i]);
      }
    }
  }
}

int main()
{
  int numeros[6];

  for (int i = 0; i < 6; i++)
  {
    printf("Digite o elemento %d:\n");
    scanf("%lf", numeros[i]);
  }

  return 0;
}