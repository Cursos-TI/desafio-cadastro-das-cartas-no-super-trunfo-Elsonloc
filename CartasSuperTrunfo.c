#include <stdio.h>

// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Elson
// COMENTARIOS FEITOS EM APENAS UMA DAS CARTAS POIS SERVE PARA AS DUAS, NAO TEM MODIFICAÇOES SIGNIFICATIVAS PARA COMENTAR AS DUAS.



    int main(){

   // Definindo as variáveis.
    // Carta 1
    int carta = 1;
    char Estado[20] = "Pará";         // Evitar usar nomes fixos para depois conseguir mudar atraves de algumas variáveis
    char Codigo_da_Carta[20] = "A01"; // O código da carta é uma string.
    char Cidade[20] = "Belem";
    unsigned long int Populacao = 8120000;
    float Area_em_km = 1.248000;  // A área está em km².
    float pib = 262.905;          // PIB referenciado em Milhoes de Reais.
    int pontos = 135;             // Número de pontos turísticos pode variar de cidade para cidade.
    float Densidade_populacional; // Variável para armazenar a densidade populacional
    float Pib_per_Capta;          // Variável para armazenar o PIB per capita
    float Super_Poder;            // Variável para armazenar o Super Poder

    // As informaçoes da carta 1 tambem serao usadas para a carta 2 com pequenas modificaçoes
    //  Carta 2
    int carta2 = 2;
    char Estado2[20] = "Pernambuco";
    char Codigo_da_Carta2[20] = "B02";
    char Cidade2[20] = "Recife";
    unsigned long int Populacao2 = 9059000;
    float Area_em_km2 = 98.312;
    float pib2 = 220.814;
    int pontos2 = 115;
    float Densidade_populacional2;
    float Pib_per_Capta2;
    float Super_Poder2;

    // Calculando as variáveis para a carta 1
    Densidade_populacional = Populacao / Area_em_km;
    Pib_per_Capta = pib * 100000 / Populacao;
    Super_Poder = Populacao + Area_em_km + pib + pontos + Pib_per_Capta + (1 / Densidade_populacional);

    // Calculando as variáveis para a carta 2
    Densidade_populacional2 = Populacao2 / Area_em_km;
    Pib_per_Capta2 = pib2 * 100000 / Populacao2;
    Super_Poder2 = Populacao2 + Area_em_km2 + pib2 + pontos2 + Pib_per_Capta2 + (1 / Densidade_populacional2);

    // Exibindo os resultados das comparações
    printf(" Comparação de Cartas\n");
    // Foram adicionados parametros de ESTRUTURA DE DECISÃO para melhorar a visualização do jogo
    // Comparando População
    printf("Populacao: ");
    if (Populacao > Populacao2)
    {
        printf("Carta 1 vence - ");
    }
    else
    {
        printf("Carta 2 vence - ");
    }

    printf("%d\n", (Populacao > Populacao2) ? 1 : 0); // 1 para Carta 1 vence, 0 para Carta 2 vence

    // Comparando Área
    printf("Area: ");
    if (Area_em_km > Area_em_km2)
    {
        printf("Carta 1 vence - ");
    }
    else
    {
        printf("Carta 2 vence - ");
    }

    printf("%d\n", (Area_em_km > Area_em_km2) ? 1 : 0); // 1 para Carta 1 vence, 0 para Carta 2 vence

    // Comparando PIB
    printf("PIB: ");
    if (pib > pib2)
    {
        printf("Carta 1 vence - ");
    }
    else
    {
        printf("Carta 2 vence - ");
    }

    printf("%d\n", (pib > pib2) ? 1 : 0); // 1 para Carta 1 vence, 0 para Carta 2 vence

    // Comparando Pontos Turísticos
    printf("Pontos Turisticos: ");
    if (pontos > pontos2)
    {
        printf("Carta 1 vence - ");
    }
    else
    {
        printf("Carta 2 vence - ");
    }

    printf("%d\n", (pontos > pontos2) ? 1 : 0); // 1 para Carta 1 vence, 0 para Carta 2 vence

    // Comparando PIB per Capita
    printf("PIB per Capita: ");
    if (Pib_per_Capta > Pib_per_Capta2)
    {
        printf("Carta 1 vence - ");
    }
    else
    {
        printf("Carta 2 vence - ");
    }

    printf("%d\n", (Pib_per_Capta > Pib_per_Capta2) ? 1 : 0); // 1 para Carta 1 vence, 0 para Carta 2 vence

    // Comparando Densidade Populacional (menor densidade vence)
    printf("Densidade Populacional: ");
    if (Densidade_populacional > Densidade_populacional2)
    {
        printf("Carta 1 vence - ");
    }
    else
    {
        printf("Carta 2 vence - ");
    }

    printf("%d\n", (Densidade_populacional < Densidade_populacional2) ? 1 : 0); // 1 para Carta 1 vence (menor densidade), 0 para Carta 2 vence

    // Comparando Super Poder
    printf("Super Poder: ");
    if (Super_Poder > Super_Poder2)
    {
        printf("Carta 1 vence - ");
    }
    else
    {
        printf("Carta 2 vence - ");
    }

    printf("%d\n", (Super_Poder > Super_Poder2) ? 1 : 0); // 1 para Carta 1 vence, 0 para Carta 2 vence

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
