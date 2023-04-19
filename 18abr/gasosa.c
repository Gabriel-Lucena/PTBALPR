#include <stdio.h>

int main()
{

    int gasolina = 10;

    while (gasolina > 1)
    {
        printf("Gasolina: %d\n", gasolina);
        gasolina -= 1;
    }

    printf("Na reserva!\n");

    return 0;
}