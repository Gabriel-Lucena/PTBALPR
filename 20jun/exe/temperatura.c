#include <stdio.h>

int temperaturasAbaixoMedia(int temperaturas[])
{

  double soma = 0;

  for (int i = 0; i < 7; i++)
  {
    soma += temperaturas[i];
  }

  double media = soma / 7;

  int quantidade = 0;

  for (int i = 0; i < 7; i++)
  {
    if (temperaturas[i] < media)
    {
      quantidade++;
    }
  }

  return quantidade;
}

int main()
{
  int vetor_temperaturas[] = {23, 43, 19, 17, 3, 29, 30};

  printf("%d", temperaturasAbaixoMedia(vetor_temperaturas));

  return 0;
}