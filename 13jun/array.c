#include <stdio.h>

void dobra(int vetor[], int n);

int main()
{
  int vetor[] = {32, 15, 25, 14};
  
  dobra(vetor, 4);

  return 0;
}

void dobra(int vetor[], int n)
{
  for (int i = 0; i < n; i++)
  {
    vetor[i] *= 2;
  }
}