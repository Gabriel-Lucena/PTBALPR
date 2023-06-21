#include <stdio.h>

int obterSegundos(int horas, int minutos)
{
  return minutos * 60 + horas * 3600;
}

int main()
{

  printf("%d", obterSegundos(38, 55));

  return 0;
}