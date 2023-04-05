#include <stdio.h>

int main()
{
    int inteiro;

    printf("Digite o inteiro: \n");

    scanf("%d", &inteiro);

    if ((inteiro % 2) == 1)
    {
        printf("É ímpar.\n");
    }
    else
    {
        printf("Par.\n");
    }

    return 0;
}