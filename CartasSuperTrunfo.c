#include <stdio.h>


// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Elson

int main() {
    printf("Desafio Super Trunfo - Estados Brasileiros.\n");


        // Definindo as variáveis
        int carta = 1;
        char Estado[20] = "Pará";  // Evitar usar nomes fixos para depois conseguir mudar atraves de algumas variáveis
        char Codigo_da_Carta[20] = "A01"; // O código da carta é uma string.
        char Cidade[20] = "Belem";
        int Populacao = 8120000;
        float Area_em_km = 1.248000; // A área está em km².
        float pib = 262.905;  // PIB referenciado em Milhoes de Reais.
        int pontos = 135; // Número de pontos turísticos pode variar de cidade para cidade.
    
        // Exibição das informações da carta 1
    
        printf("Qual o numero da carta?: ");
        scanf("%d", &carta);
        printf("A carta tem o numero: %d\n", carta);
    
    
        printf("Digite o estado: ");
        scanf("%s", &Estado);
        printf("O estado é: %s\n", Estado);
    
    
        printf("Qual o codigo da carta?:");
        scanf("%s", &Codigo_da_Carta);
        printf("O codigo da carta é: %s\n", Codigo_da_Carta);
    
    
        printf("Digite a cidade\n");
        scanf("%s", &Cidade);
        printf("A cidade é: %s\n", Cidade);
    
    
        printf("Qual a população total?: ");
        scanf("%d", &Populacao);
        printf("A populacao é: %d\n", Populacao);
    
    
        printf("Qual a area total da cidade?: ");
        scanf("%f", &Area_em_km);
        printf("A area em km2 é: %.6f\n", Area_em_km); // Aqui a área está em km². Representada por 6 casas decimais.
    
    
        printf("Qual o pib da cidade?: ");
        scanf("%f", &pib);
        printf("O pib é: %.3f Bilhões de Reais\n", pib);  // O PIB é exibido com 3 casas decimais, mas isso pode variar de acordo com a região
    
    
        printf("Quantos pontos turisticos tem a cidade?: ");
        scanf("%d", &pontos);
        printf("A quantidade de pontos turisticos é: %d\n", pontos);
    
        // Definição de variáveis para a segunda carta (deve ser otimizado) pois é preciso fazer pequenas modificaçoes para nao haver confusão ou duplicidade gerando erro.
        int carta2 = 2;
        char Estado2[20] = "Pernambuco";
        char Codigo_da_Carta2[20] = "B02"; 
        char Cidade2[20] = "Recife";
        int Populacao2 = 9059000;
        float Area_em_km2 = 98.312;
        float pib2 = 220.814;
        int pontos2 = 115;
    
        // Exibição das informações da carta 2
        printf("\nQual o numero da carta?: ");
        scanf("%d", &carta2);
        printf("A carta tem o numero: %d\n", carta2);
         //Para dar espaçamento de uma linha pra outra, colocamos dentro do parentese '\n' antes da primeira linha do texto seguinte.
        printf("Digite o estado?: ");
        scanf("%s", &Estado2);
        printf("O estado é: %s\n", Estado2);
    
    
        printf("Qual o codigo da carta?: ");
        scanf("%s", &Codigo_da_Carta2);
        printf("O codigo da carta é: %s\n", Codigo_da_Carta2);
    
    
        printf("Digite a cidade\n");
        scanf("%s", &Cidade2);
        printf("A cidade é: %s\n", Cidade2);
    
    
        printf("Qual a população total?: ");
        scanf("%d", &Populacao2);
        printf("A populacao é: %d\n", Populacao2);
    
    
        printf("Qual a area total da cidade?: ");
        scanf("%f", &Area_em_km2);
        printf("A area em km2 é: %.6f\n", Area_em_km2); // Considerando a mesma precisão de 6 casas decimais para a área.
    
    
        printf("Qual o pib da cidade?: ");
        scanf("%f", &pib2);
        printf("O pib é: %.3f Bilhões de Reais\n", pib2);
    
    
        printf("Quantos pontos turisticos tem a cidade?: ");
        scanf("%d", &pontos2);
        printf("A quantidade de pontos turisticos é: %d\n", pontos2);
    
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
