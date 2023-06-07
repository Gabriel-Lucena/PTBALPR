#include <stdio.h>

int main()
{
  int vetor[12], valor_x, valor_y;

  for (int i = 0; i < 12; i++)
  {
    printf("Digite um nu'mero: \n");
    scanf("%d", &vetor[i]);
  }

  printf("Digite o valor x: \n");
  scanf("%d", &valor_x);

  printf("Digite o valor y: \n");
  scanf("%d", &valor_y);

  printf("A soma e': %d", vetor[valor_x] + vetor[valor_y]);

  return 0;
}