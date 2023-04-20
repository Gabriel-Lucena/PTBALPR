#include <stdio.h>

int main()
{

  double temperaturaC = 0, temperaturaF = 0;

  printf("Digite a temperatura em fahrenheit: ");
  scanf("%lf", &temperaturaF);

  while (temperaturaF >= -459.67)
  {
    temperaturaC = (temperaturaF - 32) * 5 / 9;

    printf("%g F e %g C\n", temperaturaF, temperaturaC);
    printf("Digite a temperatura em fahrenheit: ");
    scanf("%lf", &temperaturaF);
  }

  return 0;
}