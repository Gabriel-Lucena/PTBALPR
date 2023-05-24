#include <stdio.h>
#include <math.h>

double dist(double x, double y);

int main()
{
  double number1 = 1;
  double number2 = 1;

  printf("%g %g = %g", number1, number2, dist(number1, number2));

  return 0;
}

double dist(double x, double y)
{

  double sumSqrt = pow(x, 2) + pow(y, 2);

  double mod = sqrt(sumSqrt);

  return mod;
}