#include <stdio.h>

int main()
{
    int idade = 0, contadorMulher = 0, sexo = 0,
        maiorIdade = 0, menorIdade = 0, contador = 0;
    double salario = 0, somaSalarial = 0;

    printf("Idade: ");
    scanf("%d", &idade);

    if (idade >= 0)
    {
        printf("Sexo (1=F 2=M): ");
        scanf("%d", &sexo);

        printf("Salario: \n");
        scanf("%lf", &salario);

        somaSalarial = somaSalarial + salario;

        if ((sexo == 1) && (salario <= 1000))
        {
            contadorMulher = contadorMulher + 1;
        }

        maiorIdade = idade;
        menorIdade = idade;
        contador = contador + 1;

        while (idade >= 0)
        {
            printf("Idade: ");
            scanf("%d", &idade);

            if (idade < 0)
            {
                break;
            }

            printf("Sexo (1=F 2=M): ");
            scanf("%d", &sexo);

            printf("Salario: \n");
            scanf("%lf", &salario);

            somaSalarial = somaSalarial + salario;

            if ((sexo == 1) && (salario <= 1000))
            {
                contadorMulher = contadorMulher + 1;
            }

            if (idade > maiorIdade)
            {
                maiorIdade = idade;
            }

            if (idade < menorIdade)
            {
                menorIdade = idade;
            }

            contador = contador + 1;
        }
    }

    printf("Media salarial = %g\n", somaSalarial / contador);
    printf("Maior idade = %d Menor idade = %d\n", maiorIdade, menorIdade);
    printf("Mulheres baixa renda = %d\n", contadorMulher);

    return 0;
}