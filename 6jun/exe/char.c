#include <stdio.h>

int main()
{
  char string[] = "algoritmos", caractere;
  int quantidade_char = 0;

  while (1)
  {
    caractere = string[quantidade_char];

    if (caractere == '\0')
    {
      break;
    }

    quantidade_char += 1;
  }

  printf("Existem %d caracteres", quantidade_char);

  return 0;
}