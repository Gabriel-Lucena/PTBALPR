#include <stdio.h>

char conceito(double nota);

int main()
{
  printf("%c", conceito(5.0));

  return 0;
}
char conceito(double nota)
{
  if (nota <= 4.9)
  {
    return 'D';
  }
  else if (nota <= 6.9)
  {
    return 'C';
  }
  else if (nota <= 8.9)
  {
    return 'B';
  }

  return 'A';
}