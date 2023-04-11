#include <stdio.h>

int main()
{
    double segmentoA, segmentoB, segmentoC;

    printf("a: ");
    scanf("%lf", &segmentoA);

    printf("b: ");
    scanf("%lf", &segmentoB);

    printf("c: ");
    scanf("%lf", &segmentoC);

    if ((segmentoA + segmentoB > segmentoC) && (segmentoA + segmentoC > segmentoB) && (segmentoB + segmentoC > segmentoA))
    {
        printf("Pode ser um triangulo");
    }
    else
    {

        printf("Nao pode ser um triangulo");
    }

    return 0;
}