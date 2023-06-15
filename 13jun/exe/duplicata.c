#include <stdio.h>

void duplicata(int vetor[], int tamanho);

void duplicata(int vetor[], int tamanho)
{
  for (int i = 0; i < tamanho; i++)
  {
    int boolean = 1;

    for (int j = i; j <= 1; j--)
    {
      if (j == i)
      {
        break;
      }
      else if ((vetor[i] == vetor[j]) && (i != j))
      {
        boolean = 0;
        break;
      }
    }

    if (boolean == 1 || i == 0)
    {
      printf("%d ", vetor[i]);
    }
  }
}

int main()
{
  int numeros[6];

  for (int i = 0; i < 6; i++)
  {
    printf("Digite o elemento %d:\n", i);
    scanf("%d", &numeros[i]);
  }

  duplicata(numeros, 6);

  return 0;
}