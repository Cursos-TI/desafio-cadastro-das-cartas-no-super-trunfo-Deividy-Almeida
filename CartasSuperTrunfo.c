#include <stdio.h>

int main(){

    int populacao, populacao2, pontos_turisticos, pontos_turisticos2;
    float area, area2, PIB, PIB2;
    char codigo[10], codigo2[10], cidade[50], cidade2[50], estado[4], estado2[4];

    printf("BEM VINDO!\n");
    printf("\n");

    printf("Agora nós iremos cadastrar algumas carta para o Desafio Super Trunfo!\n");
    printf("\n");

    printf("Vamos colocar as informações da Primeira Carta.\n");

    printf("Qual a sigla do estado ?\n");
    scanf("%s", &estado);

    printf("Qual é o codigo do estado ?\n");
    scanf("%s", &codigo);

    printf("Qual é o nome da cidade ?\n");
    scanf("%s", &cidade);

    printf("Qual a quantidade de habitantes ?\n");
    scanf("%d", &populacao);

    printf("Qual a areá da cidade ?\n");
    scanf("%f", &area);

    printf("Qual é o PIB ?\n");
    scanf("%f", &PIB);

    printf("Quantos pontos turisticos tem ?\n");
    scanf("%d", &pontos_turisticos);
    printf("\n");

    printf("A Primeira Carta ficou assim!\n");
    printf("Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da Carta: %s \n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área em km: %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", PIB);
    printf("Qantidade de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("\n");

    printf("Vamos colocar as informações da Segunda Carta agora.\n");

    printf("Qual a sigla do estado ?\n");
    scanf("%s", &estado2);

    printf("Qual é o codigo do estado ?\n");
    scanf("%s", &codigo2);

    printf("Qual é o nome da cidade ?\n");
    scanf("%s", &cidade2);

    printf("Qual a quantidade de habitantes ?\n");
    scanf("%d", &populacao2);

    printf("Qual a areá da cidade ?\n");
    scanf("%f", &area2);

    printf("Qual é o PIB ?\n");
    scanf("%f", &PIB2);

    printf("Quantos pontos turisticos tem ?\n");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

    printf("A Segunda Carta ficou assim!\n");
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da Carta: %s \n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", PIB2);
    printf("Quantos de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;

};

