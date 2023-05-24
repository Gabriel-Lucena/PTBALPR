#include <stdio.h>

int potencia(int base, int expoente);

int main()
{

  double limite, soma = 0;
  int n = 0, contador = 1;

  printf("Digite um limite pequeno do que 1:");
  scanf("%lf", &limite);
  // a
  while (1)
  {
    n++;
    contador++;
    soma += 1 / (n * n);
    if (1 / (n * n) < limite) {
      break;
    }
  }

  printf("Foram somados %d termos\n", contador);
  printf("%g", soma);

  return 0;
}
