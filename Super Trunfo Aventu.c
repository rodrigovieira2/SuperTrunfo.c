#include <stdio.h>


int main(){

    int carta1 = 1;
    char estado[3], nomedacidade[50];
    char codigo[10];
    float populacao, pontosturisticos;
    float pib, areaemkm;
    float dencidadepopulacional, pibcapita;
    

    

    int carta2 = 2;
    char estado2[3], nomedacidade2[50];
    char codigo2[10];
    float populacao2, pontosturisticos2;
    float pib2, areaemkm2; 
    float dencidadepopulacional2, pibcapita2;


    
    printf("Digite o Estado: \n");
    scanf("%s", estado);

    printf("Digite o Código \n");
    scanf("%s", codigo);

    printf("Digite o Nome da Cidade \n");
    scanf(" %s", nomedacidade);

    printf("Digite Quantidade da População \n");
    scanf("%f", &populacao);

    printf("Digite a Área em Km² \n");
    scanf("%f", &areaemkm);

    printf("Digite Qual é o PIB Bruto \n");
    scanf("%f", &pib);

    printf("Digite a Quantidade de Pontos Turísticos \n");
    scanf("%f", &pontosturisticos);

    //Calculo
    dencidadepopulacional = (float) populacao / areaemkm;
    pibcapita = (float) pib / populacao;


    printf("Digite o Estado: \n");
    scanf("%s", estado2);

    printf("Digite o Código \n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade \n");
    scanf(" %s", nomedacidade2);

    printf("Digite Quantidade da População \n");
    scanf("%f", &populacao2);

    printf("Digite a Área em Km² \n");
    scanf("%f", &areaemkm2);

    printf("Digite Qual é o PIB Bruto \n");
    scanf("%f", &pib2);

    printf("Digite a Quantidade de Pontos Turísticos \n");
    scanf("%f", &pontosturisticos2);

    //calculo 2
    dencidadepopulacional2 = (float) populacao2 / areaemkm2;
    pibcapita2 = (float) pib2 / populacao2;



    printf("Carta %d \n", carta1);

    printf("Estado: %s \n", estado);
    printf("Código: %s%s \n", estado, codigo);
    printf("Nome da Cidade: %s \n", nomedacidade);
    printf("População: %f \n", populacao);
    printf("Área Km²: %.2f \n", areaemkm);
    printf("PIB: %.2f Bilhões de Reais \n", pib);
    printf("Números de Pontos Turísticos: %f \n", pontosturisticos);
    printf("Dencidade Populacional: %.2f Hab/Km² \n", dencidadepopulacional);
    printf("PIB per Capita: %.2f reais \n", pibcapita);


    printf("Carta %d \n", carta2);

    printf("Estado: %s \n", estado2);
    printf("Código: %s%s \n", estado2, codigo2);
    printf("Nome da Cidade: %s \n", nomedacidade2);
    printf("População: %f \n", populacao2);
    printf("Área Km²: %.2f \n", areaemkm2);
    printf("PIB: %.2f Bilhões de Reais \n", pib2);
    printf("Números de Pontos Turísticos: %f \n", pontosturisticos2);
    printf("Dencidade Populacional: %.2f Hab/Km² \n", dencidadepopulacional2);
    printf("PIB per Capita: %.2f reais \n", pibcapita2);

    return 0;


}
