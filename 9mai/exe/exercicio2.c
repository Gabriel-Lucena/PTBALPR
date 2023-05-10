#include <stdio.h>

int main()
{
  int populacaoA = 5000000, populacaoB = 7000000, anos = 0;

  while (populacaoA <= populacaoB)
  {
    populacaoA = populacaoA + .03 * populacaoA;
    populacaoB = populacaoB + .02 * populacaoB;
    anos++;
  }

  if (anos == 1)
  {
    printf("Levou 1 ano.");
  }
  else
  {
    printf("Levaram %d anos.", anos);
  }

  return 0;
}