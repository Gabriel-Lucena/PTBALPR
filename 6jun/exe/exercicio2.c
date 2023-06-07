#include <stdio.h>

int main()
{
  int vetor_impares[10], j = 1;

  for (int i = 0; i < 10; i++)
  {
    vetor_impares[i] = j;
    j += 2;
  }

  for (int i = 0; i < 10; i++)
  {
    printf("%d\n", vetor_impares[i]);
  }

  return 0;
}