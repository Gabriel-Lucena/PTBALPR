#include <stdio.h>

int main()
{
    int inteiro;

    printf("Digite um número inteiro: \n");
    scanf("%d", &inteiro);

    if (inteiro > 0)
    {
        printf("O número é positivo.\n");
    }
    else if (inteiro < 0)
    {
        printf("O número é negativo.\n");
    }
    else
    {
        printf("O número é zero.\n");
    }
}