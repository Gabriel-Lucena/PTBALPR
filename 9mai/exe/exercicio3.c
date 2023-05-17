#include <stdio.h>

int main()
{
  int numeroLinhas, j = 1, contadorColuna = 1;

  printf("Digite quantas linhas deve ter o triangulo: ");
  scanf("%d", &numeroLinhas);

  for (int i = 1; i <= numeroLinhas; i++)
  {
    while (contadorColuna <= i)
    {
      printf("%2d ", j);
      j++;
      contadorColuna++;
    }

    contadorColuna = 1;

    printf("\n");
  }

  return 0;
}