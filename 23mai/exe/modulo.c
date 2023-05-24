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

  double sumSqrt = x * x + y * y;

  double mod = sqrt(sumSqrt);

  return mod;
}