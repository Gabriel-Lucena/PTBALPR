#include <stdio.h>

int main()
{

  double temperaturaC = 0, temperaturaF = 0;

  printf("Graus F: ");
  scanf("%lf", &temperaturaF);

  while (temperaturaF > -459.67)
  {
    temperaturaC = (temperaturaF - 32) * 5 / 9;

    printf("%g\n", temperaturaC);

    printf("Graus F: ");
    scanf("%lf", &temperaturaF);
  }

  return 0;
}