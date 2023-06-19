#include <stdio.h>

void procura(int vetor[], int tamanho);
int contador(int vetor[], int tamanho, int indice);

int contador(int vetor[], int tamanho, int indice)
{
  int contador = 0;

  for (int i = 0; i < tamanho; i++)
  {
    if (vetor[indice] == vetor[i])
    {
      contador += 1;
    }
  }

  return contador;
}

void procura(int vetor[], int tamanho)
{
  int numeros[tamanho];

  for (int i = 0; i < tamanho; i++)
  {
    numeros[i] = contador(vetor, tamanho, i);
  }

  for (int i = 0; i < tamanho; i++)
  {
    printf("%d ", numeros[i]);
  }
}

int main()
{

  int numeros[6];

  for (int i = 0; i < 6; i++)
  {
    printf("Digite o numero:\n", i);
    scanf("%d", &numeros[i]);
  }

  procura(numeros, 6);

  return 0;
}