#include <stdio.h>

double ideal(double altura, char sexo);

int main()
{
  double altura = 1.7;
  char sexo = 'M';

  printf("%g %c %g", altura, sexo, ideal(altura, sexo));

  return 0;
}

double ideal(double altura, char sexo)
{
  if (sexo == 'M')
  {
    return (72.7 * altura - 58);
  }
  else
  {
    return (62.1 * altura - 44.7);
  }
}