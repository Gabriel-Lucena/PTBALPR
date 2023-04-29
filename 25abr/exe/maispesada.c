#include <stdio.h>

int main()
{
  int i = 1, numero;
  double altura, peso, maiorAltura, maiorPeso;

  printf("Altura da pessoa %d: ", i);
  scanf("%lf", &altura);

  printf("Peso da pessoa %d: \n", i);
  scanf("%lf", &peso);

  maiorPeso = peso;
  maiorAltura = altura;
  numero = i;

  i++;

  while (i < 6)
  {
    printf("Altura da pessoa %d: ", i);
    scanf("%lf", &altura);

    printf("Peso da pessoa %d: \n", i);
    scanf("%lf", &peso);

    if (peso > maiorPeso)
    {

      maiorPeso = peso;
      maiorAltura = altura;

      numero = i;
    }

    i++;
  }

  printf("A pessoa mais pesada e' a de numero %d, com altura %g", numero, maiorAltura);

  return 0;
}