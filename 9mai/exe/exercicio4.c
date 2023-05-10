#include <stdio.h>

int main()
{

    int numero, i = 1, contador = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (i <= numero)
    {
        if (numero % i == 0)
        {
            contador++;
        }

        i++;
    }

    if (contador == 2)
    {
        printf("%d e' primo", numero);
    }
    else
    {
        printf("%d nao e' primo", numero);
    }

    return 0;
}