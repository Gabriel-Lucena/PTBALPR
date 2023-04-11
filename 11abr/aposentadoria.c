#include <stdio.h>

int main()
{

    int anoNascimento = 0, idade = 0, anoTrabalho = 0, tempoTrabalho = 0;

    printf("Ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Ano de ingresso: ");
    scanf("%d", &anoTrabalho);

    idade = 2021 - anoNascimento;
    tempoTrabalho = 2021 - anoTrabalho;

    printf("Idade = %d\n", idade);
    printf("Tempo de trabalho = %d\n", tempoTrabalho);

    if (
        (idade >= 65) ||
        (tempoTrabalho >= 30) ||
        ((idade >= 60) && (tempoTrabalho >= 25)))

    {
        printf("Requerer aposentadoria");
    }
    else
    {
        printf("Nao requerer");
    }

    return 0;
}