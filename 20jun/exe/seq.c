#include <stdio.h>

int main()
{
  int sequencia[15];

  for (int i = 0; i < 15; i++)
  {
    printf("Digite um nuemro:\n");
    scanf("%d", &sequencia[i]);

    if (sequencia[i] == 999)
    {
      break;
    }
  }

  int j, i = 0;
  int maior_soma, soma = 0, indice = 0;

  while (j <= 14)
  {
    for (j = i; j <= i + 3; j++)
    {
      if (sequencia[j] == 999)
      {
        break;
      }

      soma += sequencia[j];
    }

    if (sequencia[j] == 999)
    {
      break;
    }

    if (!i)
    {
      maior_soma = soma;
    }

    if (soma > maior_soma)
    {
      maior_soma = soma;
      indice = i;
    }

    i += 1;
  }

  printf("Soma=%d indice=%d\n", maior_soma, indice);

  return 0;
}