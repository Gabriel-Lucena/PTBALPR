#include <stdio.h>
#include <conio.h>

int main()
{
    double nota1, nota2, nota3, media;

    printf("Digite primeira a nota: \n");
    scanf("%lf", &nota1);

    printf("Digite segunda a nota: \n");
    scanf("%lf", &nota2);

    printf("Digite terceira a nota: \n");
    scanf("%lf", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7)
    {
        printf("PAssei.\n");
    }
    else if (media >= 4)
    {
        printf("Prova final.\n");
    }
    else
    {
        printf("De base.\n");
    }
    
    return 0;
}