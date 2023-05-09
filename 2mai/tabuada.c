#include <stdio.h>

int main()
{
    int numero, contador = 1;

    printf("Digite N: ");
    scanf("%d", &numero);

    while (contador <= 10)
    {
        printf("%d x %d = %d\n", numero, contador, numero * contador);

        contador = contador + 1;
    }

    return 0;
}