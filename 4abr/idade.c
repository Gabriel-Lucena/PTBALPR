#include <stdio.h>

int main()
{
    int idade;

    printf("Idade: \n");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Ok, pode passar!\n");
    }
    else
    {
        printf("Não pode passar!\n");
    }

    return 0;
}