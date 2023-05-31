#include <stdio.h>

int fibonacci(int n);

int main()
{

  printf("%d", fibonacci(10));

  return 0;
}

int fibonacci(int n)
{

  if (n == 0)
  {
    return 0;
  }
  else if (n == 1 || n == 2)
  {
    return 1;
  }
  else
  {
    return fibonacci(n - 2) + fibonacci(n - 1);
  }
}