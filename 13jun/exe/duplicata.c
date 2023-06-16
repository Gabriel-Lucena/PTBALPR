#include <stdio.h>

void duplicata(int vetor[], int tamanho);

int verifica(int vetor[], int tamanho);

int verificar(int vetor[], int indice, int tamanho)
{
  int boolean = 1;

  for (int i = 0; i < indice; i++)
  {
    if (vetor[i] == vetor[indice])
    {
      boolean = 0;
    }
  }

  return boolean;
}

void duplicata(int vetor[], int tamanho)
{
  for (int i = 0; i < tamanho; i++)
  {
    int boolean = 1;

    if (i != 0)
    {
      boolean = verificar(vetor, i, tamanho);
    }

    if (boolean)
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