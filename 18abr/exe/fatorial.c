#include <stdio.h>

int main()
{

    int numero, contador = 1, fatorial, numeroBkp;

    printf("Digite N: ");
    scanf("%d", &numero);

    numeroBkp = numero;

    if (numero > 1)
    {
        while (contador < numeroBkp)
        {
            fatorial = (numeroBkp - contador);
            numero = numero * fatorial;

            contador++;
        }

        printf("O fatorial de %d e' %d", numeroBkp, numero);
    }
    else
    {
        printf("O fatorial de %d e' 1", numeroBkp);
    }

    return 0;
}