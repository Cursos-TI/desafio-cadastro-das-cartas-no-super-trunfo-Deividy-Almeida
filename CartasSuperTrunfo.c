#include <stdio.h>

int main(){

    int pontos_turisticos, pontos_turisticos2, rponto_t, rpopulacao, rarea, rPIB, rPIB_percap, rsuper, rdensi_pop;
    unsigned long int populacao, populacao2;
    float area, area2, PIB, PIB2, PIB_percapita, PIB_percapita2,
          densidade_pop, densidade_pop2, superpoder1, superpoder2;
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

    PIB_percapita = (PIB  / populacao);
    densidade_pop = (populacao / area);
    superpoder1 = ((populacao + area + PIB + pontos_turisticos + PIB_percapita) - densidade_pop);

    printf("A Primeira Carta ficou assim!\n");
    printf("Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da Carta: %s \n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área em km: %.3f km²\n", area);
    printf("PIB: %.3f bilhões de reais\n", PIB);
    printf("Qantidade de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("PIB per capita: %.3f reais\n", PIB_percapita);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop);
    printf("Super Poder: %.3f\n", superpoder1);

    printf("\n");

    PIB_percapita2 = (PIB2  / populacao2);
    densidade_pop2 = (populacao2 / area2);
    superpoder2 = ((populacao2 + area2 + PIB2 + pontos_turisticos2 + PIB_percapita2) - densidade_pop2);

    printf("A Segunda Carta ficou assim!\n");
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da Carta: %s \n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km: %.3f km²\n", area2);
    printf("PIB: %3.f bilhões de reais\n", PIB2);
    printf("Quantos de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("PIB per capita: %.3f reais\n", PIB_percapita2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
    printf("Super Poder: %.3f\n", superpoder2);
    printf("\n");
    
    rpopulacao  = (populacao > populacao2);
    rarea       = (area > area2);
    rPIB        = (PIB > PIB2);
    rponto_t    = (pontos_turisticos > pontos_turisticos2);
    rdensi_pop  = (densidade_pop < densidade_pop2);
    rPIB_percap = (PIB_percapita > PIB_percapita2);
    rsuper      = (superpoder1 > superpoder2);

    printf("Comparação das Cartas!\n");
    printf("População: %lu \n", rpopulacao);
    printf("Área: %d\n", rarea);
    printf("PIB: %d\n", rPIB);
    printf("Pontos Turísticos: %d \n", rponto_t);
    printf("Densidade Populacional %d\n", rdensi_pop);
    printf("PIB per Capita: %d\n", rPIB_percap);
    printf("Super Poder: %d\n", rsuper);
    
  return 0;  
};