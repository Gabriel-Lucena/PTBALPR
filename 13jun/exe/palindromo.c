#include <stdio.h>
#include <string.h>

int verificarPalindromo(char palavra[])
{
  int tamanho = strlen(palavra);
  int palindromo = 1;

  if (tamanho % 2 == 0)

  {
    for (int i = 0; i < tamanho / 2; i++)
    {
      if (palavra[i] != palavra[tamanho - 1 - i])
      {
        palindromo = 0;
      }
    }
  }
  else
  {

    for (int i = 0; i < tamanho / 2 - 1; i++)
    {
      if (palavra[i] != palavra[tamanho - 1 - i])
      {
        palindromo = 0;
      }
    }
  }

  return palindromo;
}

int main()
{
  char palavra[30];

  strcpy(palavra, "ossaso");

  printf("%d", verificarPalindromo(palavra));

  return 0;
}