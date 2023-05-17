#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  double x = 5, y = 0, res;

  // res = pow(x, y);

  // printf("%g\n", res);

  res = sqrt(x);

  // printf("%g\n", res);

  // printf("%d", time(NULL));
  srand(time(NULL));

  for (int i = 0; i < 10; i++)
  {
    printf("%d\n", rand() % 100);
  }


  return 0;
}