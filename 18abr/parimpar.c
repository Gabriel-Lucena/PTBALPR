#include <stdio.h>

int main()
{

    int numero = 1, pares = 0, impares = 0;

    while (numero != 0)
    {

        numero = 0;
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            numero != 0 ? pares++ : numero;
        }
        else
        {
            impares++;
        }
    }

    printf("%d pares e %d impares", pares, impares);

    return 0;
}