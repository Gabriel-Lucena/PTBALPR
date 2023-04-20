#include <stdio.h>

int main()
{

  float altura, somaAltura = 0, somaIdade = 0;
  int idade = 1, contador = 0, contadorAltura = 0, contadorIdade = 0;

  while (idade > 0)
  {
    printf("Idade: ");
    scanf("%d", &idade);

    if (idade != 0)
    {
      printf("Altura: ");
      scanf("%f", &altura);

      if (altura < 1.7)
      {
        somaIdade += idade;
        contadorIdade++;
      }

      if (idade > 20)
      {
        somaAltura += altura;
        contadorAltura++;
      }

      contador++;
    }
  }

  printf("A classe tem %d alunos\n", contador);

  if (somaIdade != 0)
  {
    printf("A idade media dos alunos com menos de 1,70m de altura e' %.2f\n", somaIdade / contadorIdade);
  }
  else
  {
    printf("Nao ha' alunos com menos de 1,70m de altura\n");
  }

  if (somaAltura != 0)
  {
    printf("A altura media dos alunos com mais de 20 anos e' %.2f", somaAltura / contadorAltura);
  }
  else
  {
    printf("Nao ha' alunos com mais de 20 anos");
  }

  return 0;
}