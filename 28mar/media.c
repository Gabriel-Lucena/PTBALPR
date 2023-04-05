#include <stdio.h>

int main(void)
{
  double numero1, numero2, media;

  printf("Digite a primeira nota: ");
  scanf("%lf", &numero1);

  printf("Digite a segunda nota: ");
  scanf("%lf", &numero2);

  media = (numero1 + numero2) * .5;

  printf("Media=%g", media);

  return 0;
}