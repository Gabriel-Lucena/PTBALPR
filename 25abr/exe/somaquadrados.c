#include <stdio.h>

int main()
{
    int n, soma = 0, i = 0;

    printf("Digite N: ");
    scanf("%d", &n);

    do
    {
        soma += i * i;
        i++;
    } while (n+1 > i);

    printf("A soma dos quadrados e' %d", soma);

    return 0;
}