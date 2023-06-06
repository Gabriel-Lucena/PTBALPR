#include <stdio.h>

int main()
{
  double arroba, peso_em_quilos, soma_dos_pesos = 0;
  int opcao = 0, identificacao, idade_em_meses, soma_das_idades = 0, numero_de_animais = 0;

  printf("Digite o preco da arroba do boi: ");
  scanf("%lf", &arroba);

  while (opcao != 4)
  {
    if (opcao != 4)
    {
      switch (opcao)
      {
      case 1:
        printf("Digite o numero de identific");
        scanf("%d", &identificacao);

        printf("Digite o peso do animal: ");
        scanf("%lf", &peso_em_quilos);

        soma_dos_pesos += peso_em_quilos;

        printf("Digite a idade (meses):");
        scanf("%lf", &idade_em_meses);

        soma_das_idades += idade_em_meses;

        break;

      default:
        break;
      }
    }

    printf("1. Inserir os dados de um animal\n");
    printf("2. Finalizar o lancamento\n");
    printf("3. Reset\n");
    printf("4. Sair\n");

    scanf("%d", &opcao);
  }

  printf("Saiu");

  return 0;
}