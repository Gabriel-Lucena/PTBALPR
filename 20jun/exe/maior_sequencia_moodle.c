#include <stdio.h>

int main()
{
  int valor, sequencia[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

  for (int i = 0; i < 15; i++)
  {
    printf("Digite um numero: \n");
    scanf("%d", &valor);

    if (valor == 999)
    {
      break;
    }

    sequencia[i] = valor;
  }

  int soma = 0, maior_soma = 0, indice;
  int i = 0, j = 0;

  while (j != 14 && sequencia[i + 3])
  {

    for (j = i; j <= i + 3; j++)
    {
      soma += sequencia[j];
    }

    if (!i)
    {
      maior_soma = soma;
      indice = 0;
    }

    else if (soma > maior_soma)
    {
      maior_soma = soma;
      indice = i;
    }

    soma = 0;
    i += 1;
  }

  printf("Soma=%d inicio=%d\n", maior_soma, indice);

  return 0;
}