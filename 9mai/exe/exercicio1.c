#include <stdio.h>

int main()
{
  int numero, somaMaiorZero = 0, contadorMaiorZero = 0,
              contadorNegativo = 0, somaNegativo = 0;

  for (int i = 0; i < 10; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero < 0)
    {
      somaNegativo += numero;
      contadorNegativo++;
    }
    else
    {
      somaMaiorZero += numero;
      contadorMaiorZero++;
    }
  }

  printf("Quantidade de numeros digitados maiores ou igual a 0: %d\n", contadorMaiorZero);
  printf("Quantidade de numeros digitados menores que 0: %d\n", contadorNegativo);
  printf("Soma de todos os numeros digitados maiores que zero: %d\n", somaMaiorZero);
  printf("Soma dos numeros digitados menores que zero: %d\n", somaNegativo);

  return 0;
}