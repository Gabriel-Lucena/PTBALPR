#include <stdio.h>

int cont(int vetor[], int tamanho);

int cont(int vetor[], int tamanho)
{

  int quantidade = 0;

  for (int i = 0; i < tamanho; i++)
  {
    if (vetor[i] % 2 == 0)
    {
      quantidade += 1;
    }
  }

  return quantidade;
}

int main()
{

  int v[] = {1, 2, 3, 4, 5, 6};

  printf("%d", cont(v, 6));

  return 0;
}