#include <stdio.h>

int main(void)
{

  int inteiro, antecessor;

  printf("Entre com um numero inteiro: ");
  scanf("%d", &inteiro);

  antecessor = inteiro - 1;

  printf("%d\n", antecessor);
  
  return 0;
}