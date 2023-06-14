#include <stdio.h>
#include <string.h>

int sget(char *vetor, int TAM)
{
  fflush(stdin);
  if (fgets(vetor, TAM, stdin))
  {
    int i;
    for (i = 0; vetor[i] != '\n'; ++i)
      ;
    vetor[i] = '\0';
  }
}