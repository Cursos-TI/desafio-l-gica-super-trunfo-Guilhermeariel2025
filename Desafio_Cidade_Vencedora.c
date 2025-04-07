#include <stdio.h>


int main() {
     char carta01[15] = "Ceara (CE)";
     char carta02[15] = "Amazonas (AM)";
     char estado1[30] = "Ceara";
     char estado2[30] = "Amazonas";
     char codigo1[10] = "C123";
     char codigo2[10] = "AM234";
     char cidade1[20] = "Fortaleza";
     char cidade2[20] = "Manaus";
     int populacao1 = "8700000";
     int populacao2 = "8900000";
     float area1 = 40.000, area2 = 50.000;
     float pib_cidade1 = 30.000, pib_cidade2 = 40.000;
     int ponto_turistico_cidade1 = "50";
     int ponto_turistico_cidade2 = "60";


    printf("Digite o nome da carta 01:");
    scanf("%s", &carta01);
    printf("O nome da carta 01 e: %s\n", carta01);
    
    printf("Digite o nome da carta 02:");
    scanf("%s", &carta02);
    printf("O nome da carta 02 e: %s\n", carta02);

    printf("Digite o estado 1:");
    scanf("%s", &estado1);
    printf("O estado 1 e: %s\n", estado1);
    
    printf("Digite o estado 2:");
    scanf("%s", &estado2);
    printf("O estado 2 e \n: %s\n", estado2);

    printf("Digite o codigo da carta 1:");
    scanf("%s", &codigo1);
    printf("O codigo da carta 1 e: %s\n", codigo1);

    printf("Digite o codigo da carta 2:");
    scanf("%s", &codigo2);
    printf("O codigo da carta 2 e: %s\n", codigo2);

    printf("Digite o Nome da Cidade 1:");
    scanf("%s", &cidade1);
    printf("O Nome da cidade 1 e: %s\n", cidade1);

    printf("Digite o Nome da Cidade 2:");
    scanf("%s", &cidade2);
    printf("O Nome da Cidade 2 e: %s\n", cidade2);

    printf("Digite a populacao da cidade 1:");
    scanf("%d", &populacao1);
    printf("A populacao da cidade 1 e: %d\n", populacao1);

    printf("Digite a populacao da cidade 2:");
    scanf("%d", &populacao2);
    printf("A populacao da cidade 1 e: %d\n", populacao2);


    printf("Digite o ponto turistico da cidade 1:");
    scanf("%d", &ponto_turistico_cidade1);
    printf("O ponto turistico da cidade 1 e: %d\n", ponto_turistico_cidade1);
    
    printf("Digite o ponto turistico da cidade 2:");
    scanf("%d", &ponto_turistico_cidade2);
    printf("O ponto turistico da cidade 2 e: %d\n", ponto_turistico_cidade2);

    if(area1 >= area2){
      printf("A cidade fortalez e maior \n");
    }else{
      printf("A Cidade de fortaleza e menor que Cidade de  Manaus \n");
    }

    if(pib_cidade1  >= pib_cidade2){
      printf("A cidade de Fortaleza maior\n");
    }else{
      printf("O PiB da cidade de Manaus e maior \n");
    }

    // Imprimindo as cartas
    printf("Carta 1 - %s: %d\n",carta01 , populacao1);
    printf("Carta 2 - %s: %d\n", carta02, populacao2);

    // Verificando qual carta venceu
    if (populacao1 <= populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta01);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta02);
    }

    return 0;
}