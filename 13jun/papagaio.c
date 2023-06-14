#include <stdio.h>
#include <string.h>
/* sget() empacota fgets para stdin, chamando fflush
e retirando o \n do final*/
int sget(char *vetor, int tam)
{
  fflush(stdin); // Livra-se de teclas antigas
  if (fgets(vetor, tam, stdin))
  {
    int i;
    for (i = 0; vetor[i] != '\n' && vetor[i]; ++i)
      ;
    vetor[i] = '\0';
  }
}

int main()
{
  char string[1];

  while (1)
  {

    sget(string, 20);

    if (string[0] == '#')
    {
      break;
    }

    printf("\n%s\n", string);
  }

  return 0;
}