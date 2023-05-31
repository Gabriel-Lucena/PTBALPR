#include <stdio.h>

int tempo(double massa);

int main()
{
  printf("%d segundos", tempo(500.50));

  return 0;
}

int tempo(double massa)
{
  int contador = 0;

  while (massa > .5)
  {
    massa /= 2;
    contador++;
  }

  return contador * 50;
}