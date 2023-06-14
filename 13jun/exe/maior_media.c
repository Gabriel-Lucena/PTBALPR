#include <stdio.h>

double calcula_media(double vetor[], int tamanho);

void maiores_media(double vetor[], int tamanho);

double calcula_media(double vetor[], int tamanho)
{
  double soma = 0;

  for (int i = 0; i < tamanho; i++)
  {
    soma += vetor[i];
  }

  double media = soma / tamanho;

  return media;
}

void maiores_media(double vetor[], int tamanho)
{
  for (int i = 0; i < tamanho; i++)
  {
    if (vetor[i] > calcula_media(vetor, tamanho))
    {
      printf("%g ", vetor[i]);
    }
  }
}

int main()
{
  double numeros[5];

  for (int i = 0; i < 5; i++)
  {
    printf("Digite o elemento:\n");
    scanf("%lf", &numeros[i]);
  }

  maiores_media(numeros, 5);

  return 0;
}