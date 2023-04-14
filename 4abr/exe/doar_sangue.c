#include <stdio.h>

int main()
{
  int idade;

  printf("Idade: ");
  scanf("%d", &idade);

  if (idade >= 18 && idade <= 67)
  {
    printf("Pode doar sangue");
  }
  else
  {
    printf("Nao pode doar sangue");
  }

  return 0;
}