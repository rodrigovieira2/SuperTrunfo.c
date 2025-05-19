#include <stdio.h>


int main(){

    int carta1 = 1;
    char estado[30], nomedacidade[30];
    char codigo[30];
    int populacao, pontosturisticos;
    float pib, areaemkm;

    int carta2 = 2;
    char estado2[30], nomedacidade2[30];
    char codigo2[30];
    int populacao2, pontosturisticos2;
    float pib2, areaemkm2;

    printf("Digite o Estado: \n");
    scanf("%29s", estado);

    printf("Digite o Código \n");
    scanf("%29s", codigo);

    printf("Digite o Nome da Cidade \n");
    scanf("%29s", nomedacidade);

    printf("Digite Quantidade da População \n");
    scanf("%d", &populacao);

    printf("Digite a Área em Km² \n");
    scanf("%f", &areaemkm);

    printf("Digite Qual é o PIB Bruto \n");
    scanf("%f", &pib);

    printf("Digite a Quantidade de Pontos Turísticos \n");
    scanf("%d", &pontosturisticos);


    printf("Digite o Estado: \n");
    scanf("%29s", estado2);

    printf("Digite o Código \n");
    scanf("%29s", codigo2);

    printf("Digite o Nome da Cidade \n");
    scanf("%29s", nomedacidade2);

    printf("Digite Quantidade da População \n");
    scanf("%d", &populacao2);

    printf("Digite a Área em Km² \n");
    scanf("%f", &areaemkm2);

    printf("Digite Qual é o PIB Bruto \n");
    scanf("%f", &pib2);

    printf("Digite a Quantidade de Pontos Turísticos \n");
    scanf("%d", &pontosturisticos2);

    printf("Carta %d \n", carta1);

    printf("Estado: %s \n", estado);
    printf("Código: %s %s \n", estado, codigo);
    printf("Nome da Cidade: %s \n", nomedacidade);
    printf("População: %d \n", populacao);
    printf("Área Km²: %.2f \n", areaemkm);
    printf("PIB: %.2f Bilhões de Reais \n", pib);
    printf("Números de Pontos Turísticos: %d \n", pontosturisticos);


    printf("Carta %d \n", carta2);

    printf("Estado: %s \n", estado2);
    printf("Código: %s %s \n", estado2, codigo2);
    printf("Nome da Cidade: %s \n", nomedacidade2);
    printf("População: %d \n", populacao2);
    printf("Área Km²: %.2f \n", areaemkm2);
    printf("PIB: %.2f Bilhões de Reais \n", pib2);
    printf("Números de Pontos Turísticos: %d \n", pontosturisticos2);

    return 0;


}
