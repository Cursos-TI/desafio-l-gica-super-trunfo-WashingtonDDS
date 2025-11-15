#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    printf("\n**** Criando as Cartas do Super Trunfo ****\n\n");
    //CARTA1
    char estado;
    printf("Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &estado);
  
    char codigoDaCarta[4];
    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigoDaCarta);
  
    char nomeDaCidade[30];
    printf("O nome da cidade (máximo 29 caracteres): \n");
    scanf("%s", nomeDaCidade);
  
    unsigned long int populacao;
    printf("A população da cidade (número inteiro): \n");
    scanf("%lu", &populacao);
  
    float area;
    printf("A área da cidade em km² (número decimal): \n");
    scanf("%f", &area);
  
    float pib;
    printf("O PIB da cidade em bilhões (número decimal):  \n");
    scanf("%f", &pib);
  
    int numeroPontosTuristicos;
    printf("O número de pontos turísticos na cidade (número inteiro):  \n");
    scanf("%d", &numeroPontosTuristicos);
  
    float densidadePopulacional = populacao / area;
  
    float pibPerCapita;
  
    pibPerCapita = (float) populacao / pib;

    float superPoder;

    superPoder = (float) populacao + area + pib + numeroPontosTuristicos + pibPerCapita + (1/densidadePopulacional);
    
    //CARTA 2
    printf("\nCARTA 2 INSIRA OS DADOS \n\n");
  
    char estado2;
    printf("Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &estado2);
  
    char codigoDaCarta2[4];
    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigoDaCarta2);
  
    char nomeDaCidade2[30];
    printf("O nome da cidade (máximo 29 caracteres): \n");
    scanf("%s", nomeDaCidade2);
  
    unsigned long int populacao2;
    printf("A população da cidade (número inteiro): \n");
    scanf("%lu", &populacao2);
  
    float area2;
    printf("A área da cidade em km² (número decimal): \n");
    scanf("%f", &area2);
  
    float pib2;
    printf("O PIB da cidade em bilhões (número decimal):  \n");
    scanf("%f", &pib2);
  
    int numeroPontosTuristicos2;
    printf("O número de pontos turísticos na cidade (número inteiro):  \n");
    scanf("%d", &numeroPontosTuristicos2);
  
    float densidadePopulacional2 = populacao2 / area2;
  
    float pibPerCapita2;
  
    pibPerCapita2 = (float) populacao2 / pib2;

    float superPoder2;

    superPoder2 = (float) populacao2 + area2 + pib2 + numeroPontosTuristicos2 + pibPerCapita2 + (1/densidadePopulacional2);
 
    printf(" Carta 1:\n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %lu \n Área: %.2f km² \n PIB: %.2f bilhões \n Número de Pontos Turísticos: %d \n Densidade Populacional: %.2f hab/km² \n PIB per Capita: %.2f reais \n Super Poder: %.2f \n\n", estado, codigoDaCarta, nomeDaCidade, populacao, area, pib, numeroPontosTuristicos, densidadePopulacional, pibPerCapita, superPoder);
    printf(" Carta 2:\n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %lu \n Área: %.2f km² \n PIB: %.2f bilhões \n Número de Pontos Turísticos: %d \n Densidade Populacional: %.2f hab/km² \n PIB per Capita: %.2f reais \n Super Poder: %.2f \n\n", estado2, codigoDaCarta2, nomeDaCidade2, populacao2, area2, pib2, numeroPontosTuristicos2, densidadePopulacional2, pibPerCapita2, superPoder2);

    int resultadoPopu = (float) populacao > populacao2;
    int resultadoArea = (float) area > area2;
    int resultadoPib = (float) pib > pib2;
    int resultadoPontos = (float) numeroPontosTuristicos > numeroPontosTuristicos2;
    int resultadoDen = (float) densidadePopulacional > densidadePopulacional2;
    int resultadoPibCapi = (float) pibPerCapita > pibPerCapita2;
    int resultadoSuper = (float) superPoder > superPoder2;

    printf(" \n1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence \n\n");

    printf(" Comparação de Cartas:\n População: carta %d venceu \n Área: carta %d venceu \n PIB: carta %d venceu \n Pontos Turísticos: carta %d venceu \n Densidade Populacional: carta %d venceu \n PIB per Capita: carta %d venceu \n Super Poder: carta %d venceu \n\n", resultadoPopu, resultadoArea, resultadoPib, resultadoPontos, resultadoDen, resultadoPibCapi, resultadoSuper);
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    if (populacao > populacao2){
        printf("Carta 1 - Cidade: %s Tem a maior População: %lu.\n", nomeDaCidade, populacao );
        printf("Carta 2 - Cidade: %s Tem a manor População: %lu.\n\n", nomeDaCidade2, populacao2 );

        printf("**** Resultado: Carta 1 : (%s) venceu! ****\n\n", nomeDaCidade);
    }else {
        printf("Carta 2 - Cidade: %s Tem a maior População: %lu.\n", nomeDaCidade2, populacao2 );
        printf("Carta 1 - Cidade: %s Tem a manor População: %lu.\n\n", nomeDaCidade, populacao );

        printf("**** Resultado: Carta 2 : (%s) venceu! ****\n\n", nomeDaCidade2);
    }

    if (area > area2){
        printf("Carta 1 - Cidade: %s Tem a maior Area: %f.\n", nomeDaCidade, area );
        printf("Carta 2 - Cidade: %s Tem a manor Area: %f.\n\n", nomeDaCidade2, area2 );

        printf("**** Resultado: Carta 1 : (%s) venceu! ****\n\n", nomeDaCidade);
    }else {
        printf("Carta 2 - Cidade: %s Tem a maior Area: %f.\n", nomeDaCidade2, area2 );
        printf("Carta 1 - Cidade: %s Tem a manor Area: %f.\n\n", nomeDaCidade, area );

        printf("**** Resultado: Carta 2 : (%s) venceu! ****\n\n", nomeDaCidade2);
    }

    if (pib > pib2){
        printf("Carta 1 - Cidade: %s Tem a maior PIB: %f.\n", nomeDaCidade, pib );
        printf("Carta 2 - Cidade: %s Tem a manor PIB: %f.\n\n", nomeDaCidade2, pib2 );

        printf("**** Resultado: Carta 1 : (%s) venceu! ****\n\n", nomeDaCidade);
    }else {
        printf("Carta 2 - Cidade: %s Tem a maior PIB: %f.\n", nomeDaCidade2, pib2 );
        printf("Carta 1 - Cidade: %s Tem a manor PIB: %f.\n\n", nomeDaCidade, pib );

        printf("**** Resultado: Carta 2 : (%s) venceu! ****\n\n", nomeDaCidade2);
    }

    if (densidadePopulacional > densidadePopulacional2){
        printf("Carta 1 - Cidade: %s Tem a maior Densidade Populacional: %f.\n", nomeDaCidade, densidadePopulacional );
        printf("Carta 2 - Cidade: %s Tem a manor Densidade Populacional: %f.\n\n", nomeDaCidade2, densidadePopulacional2 );

        printf("**** Resultado: Carta 1 : (%s) venceu! ****\n\n", nomeDaCidade);
    }else {
        printf("Carta 2 - Cidade: %s Tem a maior Densidade Populacional: %f.\n", nomeDaCidade2, densidadePopulacional2 );
        printf("Carta 1 - Cidade: %s Tem a manor Densidade Populacional: %f.\n\n", nomeDaCidade, densidadePopulacional );

        printf("**** Resultado: Carta 2 : (%s) venceu! ****\n\n", nomeDaCidade2);
    }

    if (pibPerCapita > pibPerCapita2){
        printf("Carta 1 - Cidade: %s Tem a maior PIB per capita: %f.\n", nomeDaCidade, pibPerCapita );
        printf("Carta 2 - Cidade: %s Tem a manor PIB per capita: %f.\n\n", nomeDaCidade2, pibPerCapita2 );

        printf("**** Resultado: Carta 1 : (%s) venceu! ****\n\n", nomeDaCidade);
    }else {
        printf("Carta 2 - Cidade: %s Tem a maior PIB per capita: %f.\n", nomeDaCidade2, pibPerCapita2 );
        printf("Carta 1 - Cidade: %s Tem a manor PIB per capita: %f.\n\n", nomeDaCidade, pibPerCapita );

        printf("**** Resultado: Carta 2 : (%s) venceu! ****\n\n", nomeDaCidade2);
    }


    return 0;
}
