#include <stdio.h>

int main()
{
  int numero1, numero2;

  printf("Digite o numero A: ");
  scanf("%d", &numero1);

  printf("Digite o numero B: ");
  scanf("%d", &numero2);

  if (numero1 > numero2)
  {
    printf("Primeiro maior");
  }
  else if (numero1 < numero2)
  {
    printf("Segundo maior");
  }
  else
  {
    printf("Numeros iguais");
  }

  return 0;
}