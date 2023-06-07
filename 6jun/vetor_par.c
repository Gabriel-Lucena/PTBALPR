#include <stdio.h>

#define TAMANHO 15

int main()
{

  int vetor[TAMANHO], contador_par = 0;

  for (int i = 0; i < TAMANHO; i++)
  {
    printf("Digite um nu'mero: ");
    scanf("%d", &vetor[i]);
  }

  for (int i = 0; i < TAMANHO; i++)
  {
    if (vetor[i] % 2 == 0)
    {
      contador_par += 1;
    }
  }

  if (contador_par == 1)
  {
    printf("Existe %d nu'mero pare no vetor.", contador_par);
  }
  else if (contador_par > 1)
  {
    printf("Existem %d nu'meros pares no vetor.", contador_par);
  }
  else
  {
    printf("Nao existem nu'meros pares no vetor.");
  }

  return 0;
}