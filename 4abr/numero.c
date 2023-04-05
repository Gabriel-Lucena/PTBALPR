#include <stdio.h>

int main()
{
    int inteiro1, inteiro2;

    printf("Primeiro inteiro: \n");
    scanf("%d", &inteiro1);

    printf("Segundo inteiro: \n");
    scanf("%d", &inteiro2);

    if (inteiro1 == inteiro2)
    {
        printf("Iguais.\n");
    }
    else
    {
        printf("Diferentes.\n");
    }

    return 0;
}