#include <stdio.h>
#include <string.h>
#include <locale.h>

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

int main()
{
  setlocale(LC_ALL, "Portuguese");

  char string[1];
  int inteiro;

  scanf("%d", &inteiro);

  inteiro++;

  while (1)
  {
    printf("Digite uma string: \n");
    sget(string, inteiro);

    if (string[0] == '\n')
    {
      break;
    }

    printf("\n%s\n", string);
  }

  return 0;
}