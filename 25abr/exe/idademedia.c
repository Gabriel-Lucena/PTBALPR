#include <stdio.h>

int main()
{
  double idade = 0, i = -1, somaIdade = 0;

  do
  {
    somaIdade += idade;
    i++;

    printf("Idade: ");
    scanf("%lf", &idade);
  } while (idade > 0);

  printf("A média de idade é %g", somaIdade / i);

  return 0;
}