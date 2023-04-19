#include <stdio.h>

int main()
{
    double numero = 1, soma = 0, contador = 0;

    while (numero != 0)
    {
        numero = 0;
        printf("Digite um numero: ");
        scanf("%lg", &numero);

        soma += numero;

        numero != 0 ? contador++ : numero;
    }

    printf("A media e: %g", (soma) / contador);

    return 0;
}