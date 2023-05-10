#include <stdio.h>

int main()
{

    int numero = 11, i = 1, contador = 0;

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

    return 0;
}