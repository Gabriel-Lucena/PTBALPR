#include <stdio.h>

int main()
{

  double limite, soma = 0, n = 1;
  int contador = 0;

  printf("Digite um limite pequeno, menor do que 1:");
  scanf("%lf", &limite);

  while (1 / (n * n) >= limite)
  {
    soma += 1 / (n * n);
    n++;
    contador++;
  }

  soma += 1 / (n * n);
  n++;
  contador++;

  printf("Foram somados %d termos\n", contador);
  printf("%g", soma);

  return 0;
}
