#include <stdio.h>
#include <math.h>

int main()
{
double coeficientes[6];

  for (int i = 0; i < 6; i++)
  {
    printf("Digite o coeficiente %d:\n", i);
    scanf("%lf",&coeficientes[i]);
  }

  double variavel = 1;

  while (variavel != 0)
  {
    
    printf("Digite X: ");
    scanf("%lf", &variavel);

    if (!variavel)
    {
      break;
    }
    

    printf("p(%g) = %g\n", variavel, coeficientes[0]  + coeficientes[1] * variavel+ coeficientes[2] * pow(variavel, 2)+ coeficientes[3] * pow(variavel, 3) + coeficientes[4] * pow(variavel, 4) + coeficientes[5] * pow(variavel, 5));
  }
  

  return 0;
}