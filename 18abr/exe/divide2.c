#include <stdio.h>

int main()
{

  double numeroReal;
  int contador = 0;

  printf("Digite N: ");
  scanf("%lf", &numeroReal);

  while (numeroReal >= 1)
  {
    numeroReal /= 2;
    contador++;
  }

  printf("Ultimo resultado = %g\n", numeroReal);
  printf("Foram feitas %d divisoes", contador);

  return 0;
}