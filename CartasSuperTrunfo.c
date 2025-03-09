#include <stdio.h>

// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Elson
// COMENTARIOS FEITOS EM APENAS UMA DAS CARTAS POIS SERVE PARA AS DUAS, NAO TEM MODIFICAÇOES SIGNIFICATIVAS PARA COMENTAR AS DUAS.



    int main(){

   // Definindo as variáveis.
  // Inicializa o gerador de números aleatórios
  srand(time(0));

  // Definição das cartas
  char Estado1[20] = "Pará", Codigo1[5] = "A01", Cidade1[20] = "Belém";
  unsigned long int Populacao1 = 9019000;
  float Area1 = 99000, PIB1 = 262.905;
  int Pontos1 = 135;
  float Densidade1 = Populacao1 / Area1;
  float PIB_per_Capita1 = (PIB1 * 100000) / Populacao1;
  
  char Estado2[20] = "Pernambuco", Codigo2[5] = "B02", Cidade2[20] = "Recife";
  unsigned long int Populacao2 = 9100000;
  float Area2 = 98312, PIB2 = 272.905;
  int Pontos2 = 165;
  float Densidade2 = Populacao2 / Area2;
  float PIB_per_Capita2 = (PIB2 * 100000) / Populacao2;

  // Variáveis de escolha dos atributos
  int opcao, opcao2;

  printf("Escolha dois atributos diferentes:\n");
  printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
  
  // Escolha do primeiro atributo
  printf("Escolha o primeiro atributo: ");
  scanf("%d", &opcao);
  
  // Escolha do segundo atributo
  printf("Escolha o segundo atributo: ");
  scanf("%d", &opcao2);
  
  // Verifica se os atributos são diferentes
  if (opcao == opcao2) {
      opcao2 = (rand() % 5) + 1; // Escolhe um atributo aleatório diferente
      while (opcao2 == opcao) {
          opcao2 = (rand() % 5) + 1;
      }
      printf("Atributo repetido! Escolhendo automaticamente outro: %d\n", opcao2);
  }

  // Variáveis para os valores dos atributos
  float valor1_opcao = 0, valor2_opcao = 0, valor1_opcao2 = 0, valor2_opcao2 = 0;

  // Usando switch para atribuir os valores dos atributos para o primeiro atributo
  switch (opcao) {
      case 1: valor1_opcao = Populacao1; valor2_opcao = Populacao2; break;
      case 2: valor1_opcao = Area1; valor2_opcao = Area2; break;
      case 3: valor1_opcao = PIB1; valor2_opcao = PIB2; break;
      case 4: valor1_opcao = Pontos1; valor2_opcao = Pontos2; break;
      case 5: valor1_opcao = Densidade1; valor2_opcao = Densidade2; break;
      default: printf("Opção inválida.\n"); return 1;
  }
  
  // Usando switch para atribuir os valores dos atributos para o segundo atributo
  switch (opcao2) {
      case 1: valor1_opcao2 = Populacao1; valor2_opcao2 = Populacao2; break;
      case 2: valor1_opcao2 = Area1; valor2_opcao2 = Area2; break;
      case 3: valor1_opcao2 = PIB1; valor2_opcao2 = PIB2; break;
      case 4: valor1_opcao2 = Pontos1; valor2_opcao2 = Pontos2; break;
      case 5: valor1_opcao2 = Densidade1; valor2_opcao2 = Densidade2; break;
      default: printf("Opção inválida.\n"); return 1;
  }

  // Soma dos valores dos atributos
  float soma1 = valor1_opcao + valor1_opcao2;
  float soma2 = valor2_opcao + valor2_opcao2;

  // Exibição dos resultados
  printf("\nComparação entre %s (Carta 1) e %s (Carta 2):\n", Estado1, Estado2);
  printf("Atributo %d: %.2f vs %.2f\n", opcao, valor1_opcao, valor2_opcao);
  printf("Atributo %d: %.2f vs %.2f\n", opcao2, valor1_opcao2, valor2_opcao2);
  printf("Soma dos atributos: %.2f vs %.2f\n", soma1, soma2);
  
  // Resultado da comparação
  if (soma1 > soma2) {
      printf("O estado do Pará venceu!\n");
  } else if (soma2 > soma1) {
      printf("O estado de Pernambuco venceu!\n");
  } else {
      printf("Empate!\n");
  }
  
    return 0; // Encerramento da função main (Sempre encerrar)

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
}
