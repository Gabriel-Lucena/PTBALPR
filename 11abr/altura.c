#include <stdio.h>

int main()
{
    double altura = 0;
    int sexo = 0;

    printf("Digite a altura em metros: ");
    scanf("%lf", &altura);

    printf("Digite 1 para sexo masculino e 2 para feminino: ");
    scanf("%d", &sexo);

    if (sexo == 1)
    {
        printf("%g", 72.7 * altura - 58);
    }
    else
    {
        printf("%g", 62.1 * altura - 44.7);
    }

    return 0;
}