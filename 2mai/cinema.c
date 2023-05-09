#include <stdio.h>

int main()
{

    int idade = 0, contadorBebe = 0, contadorCrianca = 0, contadorAdulto = 0;

    while (idade >= 0)
    {
        printf("Idade: ");
        scanf("%d", &idade);

        if (idade < 0)
        {
            break;
        }

        if (idade < 3)
        {
            printf("Preco=0\n");
            contadorBebe = contadorBebe + 1;
        }
        else
        {
            if (idade < 13)
            {
                printf("Preco=10\n");
                contadorCrianca = contadorCrianca + 1;
            }
            else
            {
                printf("Preco=15\n");
                contadorAdulto = contadorAdulto + 1;
            }
        }
    }

    printf("Total arrecadado = %d\n", contadorCrianca * 10 + contadorAdulto * 15);
    printf("N 0 a 2 = %d\n", contadorBebe);
    printf("N 3 a 12 = %d\n", contadorCrianca);
    printf("N 13 ou mais = %d", contadorAdulto);

    return 0;
}