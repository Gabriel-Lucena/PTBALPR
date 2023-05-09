#include <stdio.h>

int main()
{
  int quantidade, i = 0, sequencia = 0, antecessor1 = 1,
                  antecessor2 = 0;

  printf("Digite N: ");
  scanf("%d", &quantidade);

  printf("0 1 "); 
  while (i < (quantidade - 2))
  {
    sequencia = antecessor1 + antecessor2;
    antecessor2 = antecessor1;
    antecessor1 = sequencia;

    printf("%d ", sequencia);

    i++;
  }

  return 0;
}