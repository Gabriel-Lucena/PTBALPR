#include <stdio.h>

int main()
{
  double maior = -1, menor = 1000, numero, aux;
  int contador = 0;

  printf("Digite um numero:\n");
  scanf("%lf", &numero);

  maior = numero;

  printf("Digite um numero:\n");
  scanf("%lf", &numero);

  menor = numero;

  if (menor > maior)
  {
    aux = maior;
    maior = menor;
    menor = aux;
  }

  while (contador < 3)
  {

    printf("Digite um numero:\n");
    scanf("%lf", &numero);

    if (numero < menor)
    {
      menor = numero;
    }
    else if (numero > maior)
    {
      maior = numero;
    }

    contador++;
  }

  printf("%g %g", maior, menor);

  return 0;
}