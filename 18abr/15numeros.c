#include <stdio.h>
int main()
{
    int contador = 0, numero, maior;

    while (contador < 15)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (contador == 0)
        {
            maior = numero;
        }

        if (numero > maior)
        {
            maior = numero;
        }

        contador++;
    }

    printf("O maior numero e: %d", maior);

    return 0;
}