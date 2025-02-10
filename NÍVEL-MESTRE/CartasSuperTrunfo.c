#include <stdio.h>

int main() {
    char nomeCidade1[50], nomeCidade2[50], cod[3], cod2[3]; //Váriavel de caracteres com limite de 50
    int pontosTuristicos1;
    float populacao1, area1, pib1, densidade1, pibPerCapta1;
    int pontosTuristicos2;
    float populacao2, area2, pib2, densidade2, pibPerCapta2;
    double superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapta1 + densidade1; //Váriaveis de ponto flutuante
    double superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapta2 + densidade2;

    printf("Digite o codigo da Carta (8 estados de A a H, quatro cidades de 1 a 4. Ex: A01): "); //Mostra no términal o inicio do programa
    scanf("%s", &cod);

    printf("\nNome da Cidade: "); //Indica no terminal que o usuário tem que inserir o Nome da Cidade
    scanf("%s", &nomeCidade1); //fgets lê o input do usuário no términal e armazena na váriavel, sizeof indica a quantidade de armazenamento necessária para armazenar um objeto do tipo do operando, stdin é o dispositivo de entrada padão

    printf("\nPopulação: "); //Indica no terminal que o usuário tem que inserir a População
    scanf("%f", &populacao1); //Input que vai armazenar um valor na váriavel populacao

    printf("\nÁrea: "); //Indica no terminal que o usuário tem que inserir a Área
    scanf("%f", &area1); //Input que vai armazenar um valor na váriavel area

    printf("\nPIB: "); //Indica no terminal que o usuário tem que inserir o PIB
    scanf("%f", &pib1); //Input que vai armazenar um valor na váriavel pib

    printf("\nQuantidade de Pontos Turisticos: "); //Indica no terminal que o usuário tem que inserir a Quantidade de Pontos Turisticos
    scanf("%i", &pontosTuristicos1); //Input que vai armazenar um valor na váriavel pontosTuristicos
    
    densidade1 = (float)populacao1 / area1; //Calculo da densidade
    pibPerCapta1 = (float)pib1 / populacao1; //Calculo da PIB per capta


    printf("\n\nDigite o codigo da segunda Carta (8 estados de A a H, quatro cidades de 1 a 4. Ex: A01): "); //Mostra no términal o inicio do programa
    scanf("%s", &cod2); //Mostra no términal o inicio do programa

    printf("\nNome da Cidade: "); //Indica no terminal que o usuário tem que inserir o Nome da Cidade
    scanf("%s", &nomeCidade2); //fgets lê o input do usuário no términal e armazena na váriavel, sizeof indica a quantidade de armazenamento necessária para armazenar um objeto do tipo do operando, stdin é o dispositivo de entrada padão

    printf("\nPopulação: "); //Indica no terminal que o usuário tem que inserir a População
    scanf("%f", &populacao2); //Input que vai armazenar um valor na váriavel populacao

    printf("\nÁrea: "); //Indica no terminal que o usuário tem que inserir a Área
    scanf("%f", &area2); //Input que vai armazenar um valor na váriavel area

    printf("\nPIB: " ); //Indica no terminal que o usuário tem que inserir o PIB
    scanf("%f", &pib2); //Input que vai armazenar um valor na váriavel pib

    printf("\nQuantidade de Pontos Turisticos: "); //Indica no terminal que o usuário tem que inserir a Quantidade de Pontos Turisticos
    scanf("%i", &pontosTuristicos2); //Input que vai armazenar um valor na váriavel pontosTuristicos
    
    densidade2 = (float)populacao2 / area2; //Calculo da densidade
    pibPerCapta2 = (float)pib2 / populacao2; //Calculo da PIB per capta
    
    printf("\n\nSUA CARTA 1:\n"); 
    printf("\nNome: %s", nomeCidade1);
    printf("\nPopulação: %f", populacao1); 
    printf("\nÁrea: %f", area1); 
    printf("\nPIB: %f", pib1); 
    printf("\nPontos Turisticos: %i", pontosTuristicos1); 
    printf("\nDensidade Populacional: %f", densidade1); 
    printf("\nPIB per Capta: %f", pibPerCapta1); 
    printf("\nSuper Poder (soma de todos os atributos): %lf", superPoder1);

    printf("\n\nSUA CARTA 2:\n"); //
    printf("\nNome: %s", nomeCidade2); //Mostra para o usuário as informações que foram armazenadas em nomeCidade
    printf("\nPopulação: %f", populacao2); //Mostra para o usuário as informações que foram armazenadas em populacao
    printf("\nÁrea: %f", area2); //Mostra para o usuário as informações que foram armazenadas em area
    printf("\nPIB: %f", pib2); //Mostra para o usuário as informações que foram armazenadas em pib
    printf("\nPontos Turisticos: %i", pontosTuristicos2); //Mostra para o usuário as informações que foram armazenadas em pontosTuristicos
    printf("\nDensidade Populacional: %f", densidade2); //Mostra a densidade populacional
    printf("\nPIB per Capta: %f", pibPerCapta2); //Mostra o PIB per Capta
    printf("\nSuper Poder (soma de todos os atributos): %lf", superPoder2);

    printf("\n\nCOMPARAÇÃO:\n");
    
    printf("\nPopulação 1: %f", populacao1);
    printf("\nPopulação 2: %f", populacao2);
    if (populacao1 > populacao2) {
        printf("\nVencedor: CARTA 1");
    } else {
        printf("\nVencendor: Carta 2\n");
    };
    
    printf("\nArea 1: %f", area1);
    printf("\nArea 2: %f", area2);
    if (area1 > area2) {
        printf("\nVencedor: CARTA 1");
    } else {
        printf("\nVencedor: CARTA 2\n");
    };

    printf("\nPIB 1: %f", pib1);
    printf("\nPIB 2: %f", pib2);
    if (pib1 > pib2) {
        printf("\nVencedor: CARTA 1");
    } else {
        printf("\nVencedor: CARTA 2\n");
    };

    printf("\nPontos Turisticos 1: %i", pontosTuristicos1);
    printf("\nPontos Turisticos 2: %i", pontosTuristicos2);
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("\nVencedor: CARTA 1");
    } else {
        printf("\nVencedor: CARTA 2\n");
    };

    printf("\nDensidade Populacional 1: %f", densidade1);
    printf("\nDensidade Populacional 2: %f", densidade2);
    if (densidade1 < densidade2) {
        printf("\nVencedor: CARTA 1");
    } else {
        printf("\nVencedor: CARTA 2\n");
    };

    printf("\nPIB per Capta 1: %f", pibPerCapta1);
    printf("\nPIB per Capta 2: %f", pibPerCapta2);
    if (pibPerCapta1 > pibPerCapta2) {
        printf("\nCARTA 1");
    } else {
        printf("\nCarta 2\n");
    };

    printf("\nSuper Poder 1: %lf", superPoder1);
    printf("\nSuper Poder 2: %lf", superPoder2);
    if (superPoder1 > superPoder2) {
        printf("\nCARTA 1");
    } else {
        printf("\nCarta 2\n");
    };

    return 0; //Demonstra que a operação foi finalizada corretamente
} //Fim da operação
