#include <stdio.h>

int main()
{

    double numero = 0;

    printf("Digite um numero: ");
    scanf("%lf", &numero);

    if (numero <= 10)
    {
        printf("F1");
    }
    else
    {
        if (numero <= 100)
        {
            printf("F2");
        }
        else
        {
            printf("F3");
        }
    }

    return 0;
}