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

  for (int i = quantidade_char; i >= 0; i--)
  {
    printf("%c", string[i]);
  }

  return 0;
}