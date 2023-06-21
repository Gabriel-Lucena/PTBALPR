#include <stdio.h>

int main()
{
  int valor = 0, sequencia[15], tamanho = 0;

  for (int i = 0; i < 15; i++)
  {

    printf("Digite um numero: ");
    scanf("%d", &valor);

    tamanho += 1;

    if (valor == 999)
    {
      break;
    }

    sequencia[i] = valor;
  }

  int soma = 0;

  if (tamanho <= 4)
  {
    for (int i = 0; i < tamanho; i++)
    {
      soma += sequencia[i];
    }

    printf("Soma=%d inicio=0\n", soma);
  }
  else
  {

    int maior_soma = 0;
    int maior_indice = 0;

    for (int i = 0; i < 4; i++)
    {
      maior_soma += sequencia[i];
    }

    for (int i = 1; i < tamanho; i++)
    {

      for (int j = i; j < i + 3; j++)
      {
        soma += sequencia[j];
      }

      if (soma > maior_soma)
      {
        maior_soma = soma;
        maior_indice = i;
      }
      soma = 0;
    }

    printf("Soma=%d inicio=%d\n", maior_soma, maior_indice);
  }

  return 0;
}