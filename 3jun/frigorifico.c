#include <stdio.h>

int main()
{
  int opcao = 0;
  double arroba;

  double soma_dos_pesos = 0, soma_das_idades = 0;
  double media_dos_pesos, media_das_idades;

  int identificacao;
  int idade;
  double peso;

  int numero_de_animais = 0;

  int maior_peso_identificacao;
  double maior_peso;
  int maior_peso_idade;

  int menor_peso_identificacao;
  double menor_peso;
  int menor_peso_idade;

  int menor_idade;
  double menor_idade_peso;

  int maior_idade;
  double maior_idade_peso;

  printf("Digite o preco da arroba do boi atual: ");
  scanf("%lf", &arroba);

  printf("\n");

  while (opcao != 4)
  {

    if (opcao == 1)
    {

      printf("\n");

      printf("Digite o nu'mero de identificacao: ");
      scanf("%d", &identificacao);

      printf("Digite o peso do animal: ");
      scanf("%lf", &peso);

      soma_dos_pesos += peso;

      printf("Digite a idade (meses): ");
      scanf("%d", &idade);

      printf("\n");

      soma_das_idades += idade;

      numero_de_animais += 1;

      if (numero_de_animais == 1)
      {

        maior_peso_identificacao = identificacao;
        maior_peso = peso;
        maior_peso_idade = idade;

        menor_peso_identificacao = identificacao;
        menor_peso = peso;
        menor_peso_idade = idade;

        maior_idade = idade;
        maior_idade_peso = peso;

        menor_idade = idade;
        menor_idade_peso = peso;
      }
      else
      {
        // maior peso

        if (peso > maior_peso)
        {
          maior_peso_identificacao = identificacao;
          maior_peso = peso;
          maior_peso_idade = idade;
        }

        // menor peso

        if (peso < menor_peso)
        {
          menor_peso_identificacao = identificacao;
          menor_peso = peso;
          menor_peso_idade = idade;
        }

        // maior idade

        if (idade > maior_idade)
        {
          maior_idade = idade;
          maior_idade_peso = peso;
        }

        // menor idade

        if (idade < menor_idade)
        {
          menor_idade = idade;
          menor_idade_peso = peso;
        }
      }
    }

    if (opcao == 2)
    {
      printf("\n");

      printf("O total de peso dos animais recebidos\n");

      printf("\n");

      printf("Soma dos pesos: %g\n", soma_dos_pesos);

      printf("\n");

      printf("A identificacao, o peso e a idade do animal mais pesado\n");

      printf("\n");

      printf("Identificacao: %d\n", maior_peso_identificacao);
      printf("Peso: %g\n", maior_peso);
      printf("Idade: %d\n", maior_peso_idade);

      printf("\n");

      printf("A identificacao, o peso e a idade do animal mais leve\n");

      printf("\n");

      printf("Identificacao: %d\n", menor_peso_identificacao);
      printf("Peso: %g\n", menor_peso);
      printf("Idade: %d\n", menor_peso_idade);

      printf("\n");

      printf("A idade e peso do animal mais velho\n");

      printf("\n");

      printf("Idade: %d\n", maior_idade);
      printf("Peso: %g\n", maior_idade_peso);

      printf("\n");

      printf("A idade e peso do animal mais novo\n");

      printf("\n");

      printf("Idade: %d\n", menor_peso);
      printf("Peso: %g\n", menor_idade_peso);

      printf("\n");

      media_dos_pesos = soma_dos_pesos / numero_de_animais;
      media_das_idades = soma_das_idades / numero_de_animais;

      printf("A me'dia de peso dos animais: %g\n", media_dos_pesos);
      printf("A me'dia de idade dos animais: %g\n", media_das_idades);

      printf("\n");

      printf("Preco total do lote: R$ %g\n", 15 * arroba * numero_de_animais);

      printf("\n");
    }

    if (opcao == 3)
    {
      arroba = 0;

      soma_dos_pesos = 0;
      soma_das_idades = 0;

      media_das_idades = 0;
      media_dos_pesos = 0;

      identificacao = 0;
      idade = 0;
      peso = 0;

      numero_de_animais = 0;

      maior_peso_identificacao = 0;
      maior_peso = 0;
      maior_peso_idade = 0;

      menor_peso_identificacao = 0;
      menor_peso = 0;
      menor_peso_idade = 0;

      maior_idade = 0;
      maior_idade_peso = 0;

      menor_idade = 0;
      menor_idade_peso = 0;
    }

    if (opcao == 4)
    {
      break;
    }

    printf("1. Inserir os dados de um animal\n");
    printf("2. Finalizar o lancamento\n");
    printf("3. Reset\n");
    printf("4. Sair\n");

    printf("\n");

    scanf("%d", &opcao);

    printf("\n");
  }

  return 0;
}
