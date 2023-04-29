#include <stdio.h>

int main()
{
    int numero, soma = 0, i = 0;

    printf("Digite N: ");
    scanf("%d", &numero);

    do
    {
        soma += i * i;
        i++;
    } while (numero + 1 > i);

    printf("A soma dos quadrados e' %d", soma);

    return 0;
}