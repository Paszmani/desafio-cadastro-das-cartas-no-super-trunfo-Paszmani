#include <stdio.h>

int main() {
    char nomeCidade1[50], nomeCidade2[50]; //Váriavel de caracteres com limite de 50
    int populacao1, area1, pib1, pontosTuristicos1, densidade1, pibPerCapta1;
    int populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapta2;//Váriaveis de números inteiros
    int superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapta1 + densidade1; //Váriaveis de ponto flutuante
    int superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapta2 + densidade2;

    printf("SUPER TRUNFO\n"); //Mostra no términal o inicio do programa
    printf("Nome da Cidade:\n"); //Indica no terminal que o usuário tem que inserir o Nome da Cidade
    scanf("%s", &nomeCidade2); //fgets lê o input do usuário no términal e armazena na váriavel, sizeof indica a quantidade de armazenamento necessária para armazenar um objeto do tipo do operando, stdin é o dispositivo de entrada padão

    printf("População:\n"); //Indica no terminal que o usuário tem que inserir a População
    scanf("%i", &populacao1); //Input que vai armazenar um valor na váriavel populacao

    printf("Área:\n"); //Indica no terminal que o usuário tem que inserir a Área
    scanf("%i", &area1); //Input que vai armazenar um valor na váriavel area

    printf("PIB:\n"); //Indica no terminal que o usuário tem que inserir o PIB
    scanf("%i", &pib1); //Input que vai armazenar um valor na váriavel pib

    printf("Quantidade de Pontos Turisticos:\n"); //Indica no terminal que o usuário tem que inserir a Quantidade de Pontos Turisticos
    scanf("%i", &pontosTuristicos1); //Input que vai armazenar um valor na váriavel pontosTuristicos
    
    densidade1 = (int)populacao1 / area1; //Calculo da densidade
    pibPerCapta1 = (int)pib1 / populacao1; //Calculo da PIB per capta


    printf("\nCrie uma outra carta\n"); //Mostra no términal o inicio do programa
    printf("Nome da Cidade:\n"); //Indica no terminal que o usuário tem que inserir o Nome da Cidade
    scanf("%s", &nomeCidade1); //fgets lê o input do usuário no términal e armazena na váriavel, sizeof indica a quantidade de armazenamento necessária para armazenar um objeto do tipo do operando, stdin é o dispositivo de entrada padão

    printf("População:\n"); //Indica no terminal que o usuário tem que inserir a População
    scanf("%i", &populacao2); //Input que vai armazenar um valor na váriavel populacao

    printf("Área:\n"); //Indica no terminal que o usuário tem que inserir a Área
    scanf("%i", &area2); //Input que vai armazenar um valor na váriavel area

    printf("PIB:\n"); //Indica no terminal que o usuário tem que inserir o PIB
    scanf("%i", &pib2); //Input que vai armazenar um valor na váriavel pib

    printf("Quantidade de Pontos Turisticos:\n"); //Indica no terminal que o usuário tem que inserir a Quantidade de Pontos Turisticos
    scanf("%i", &pontosTuristicos2); //Input que vai armazenar um valor na váriavel pontosTuristicos
    
    densidade2 = (int)populacao2 / area2; //Calculo da densidade
    pibPerCapta2 = (int)pib2 / populacao2; //Calculo da PIB per capta
    
    printf("\nSUA CARTA 1:\n"); 
    printf("Nome: %s\n", nomeCidade1);
    printf("População: %i\n", populacao1); 
    printf("Área: %i\n", area1); 
    printf("PIB: %i\n", pib1); 
    printf("Pontos Turisticos: %i\n", pontosTuristicos1); 
    printf("Densidade Populacional: %i\n", densidade1); 
    printf("PIB per Capta: %i\n", pibPerCapta1); 
    printf("Super Poder (soma de todos os atributos): %i\n", superPoder1);

    printf("\nSUA CARTA 2:\n"); //
    printf("Nome: %s\n", nomeCidade2); //Mostra para o usuário as informações que foram armazenadas em nomeCidade
    printf("População: %i\n", populacao2); //Mostra para o usuário as informações que foram armazenadas em populacao
    printf("Área: %i\n", area2); //Mostra para o usuário as informações que foram armazenadas em area
    printf("PIB: %i\n", pib2); //Mostra para o usuário as informações que foram armazenadas em pib
    printf("Pontos Turisticos: %i\n", pontosTuristicos2); //Mostra para o usuário as informações que foram armazenadas em pontosTuristicos
    printf("Densidade Populacional: %i\n", densidade2); //Mostra a densidade populacional
    printf("PIB per Capta: %i\n", pibPerCapta2); //Mostra o PIB per Capta
    printf("Super Poder (soma de todos os atributos): %i\n", superPoder2);

    printf("\nCOMPARAÇÃO:\n");
    
    printf("População 1: %i\n", populacao1);
    printf("População 2: %i\n", populacao2);
    if (populacao1 > populacao2) {
        printf("CARTA 1\n");
    } else {
        printf("Carta 2\n");
    };
    
    printf("Area 1: %i\n", area1);
    printf("area 2: %i\n", area2);
    if (area1 > area2) {
        printf("CARTA 1\n");
    } else {
        printf("Carta 2\n");
    };

    printf("PIB 1: %i\n", pib1);
    printf("PIB 2: %i\n", pib2);
    if (pib1 > pib2) {
        printf("CARTA 1\n");
    } else {
        printf("Carta 2\n");
    };

    printf("Pontos Turisticos 1: %i\n", pontosTuristicos1);
    printf("Pontos Turisticos 2: %i\n", pontosTuristicos2);
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("CARTA 1\n");
    } else {
        printf("Carta 2\n");
    };

    printf("Densidade Populacional 1: %i\n", densidade1);
    printf("Densidade Populacional 2: %i\n", densidade2);
    if (densidade1 < densidade2) {
        printf("CARTA 1\n");
    } else {
        printf("Carta 2\n");
    };

    printf("PIB per Capta 1: %i\n", pibPerCapta1);
    printf("PIB per Capta 2: %i\n", pibPerCapta2);
    if (pibPerCapta1 > pibPerCapta2) {
        printf("CARTA 1\n");
    } else {
        printf("Carta 2\n");
    };

    printf("Super Poder 1: %i\n", superPoder1);
    printf("Super Poder 2: %i\n", superPoder2);
    if (superPoder1 > superPoder2) {
        printf("CARTA 1\n");
    } else {
        printf("Carta 2\n");
    };

    return 0; //Demonstra que a operação foi finalizada corretamente
} //Fim da operação
