#include <stdio.h>

int main()
{
  char nome[50];

  printf("Digite seu nome: \n");
  // scanf("%s", &nome);
  fgets(nome, 50, stdin);

  printf("\n%s\n", nome);

  return 0;
}