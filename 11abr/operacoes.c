#include <stdio.h>

int main()
{

    int numero1, numero2;

    printf("Digite N1: ");
    scanf("%d", &numero1);

    printf("Digite N2: ");
    scanf("%d", &numero2);

    printf("Soma=%d sub=%d mult=%d div=%d", numero1 + numero2, numero1 - numero2, numero1 * numero2, numero1 / numero2);

    return 0;
}