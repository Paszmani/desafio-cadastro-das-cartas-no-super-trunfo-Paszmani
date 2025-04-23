#include <stdio.h>

int main() {
    int opcao, opcao2;
    char nomeCidade1[20], nomeCidade2[20], cod1[20] = "A01", cod2[20] = "B02", estado1[20], estado2[20], resultado; 
    int pontosTuristicos1 = 12;
    float populacao1 = 1200.0, area1 = 2300.0, pib1 = 1500.0, densidade1, pibPerCapta1;
    int pontosTuristicos2 = 15;
    float populacao2 = 2000.0, area2 = 3200.0, pib2 = 2000.0, densidade2, pibPerCapta2;
    
    densidade1 = (float)populacao1 / area1; 
    densidade2 = (float)populacao2 / area2; 

    printf("Selecione um atributo a ser comparado\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turisticos\n");
    printf("5. Densidade demográfica\n");
    printf("----------------------------\n");
    scanf("%i", &opcao);
    
    switch (opcao)
    {
    case 1:
    printf("Selecione mais um atributo\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turisticos\n");
    printf("5. Densidade demográfica\n");
    printf("----------------------------\n");
    scanf("%i", &opcao2);

        switch (opcao2)
        {
        case 2:
        printf("Atributo 1: População - A01: %f / B02: %f\n", populacao1, populacao2);
        if (populacao1 > populacao2) {
        printf("Carta 1 venceu\n");
        }else{
        printf("Carta 2 venceu\n");
        }
        
        printf("Atributo 2: Área - A01: %f / B02: %f\n", area1, area2);
        if (area1 > area2) {
        printf("Carta 1 venceu\n");
        }else{
        printf("Carta 2 venceu\n");
        }
            break;

        case 3:
        printf("Atributo 1: População - A01: %f / B02: %f\n", populacao1, populacao2);
        printf("Atributo 2: PIB - A01: %f / B02: %f", pib1, pib2);
            break;

        case 4:
        printf("Atributo 1: População - A01: %f / B02: %f\n", populacao1, populacao2);
        printf("Atributo 2: Pontos Turisticos - A01: %i / B02: %i", pontosTuristicos1, pontosTuristicos2);
            break; 

        case 5:
        printf("Atributo 1: População - A01: %f / B02: %f\n", populacao1, populacao2);
        printf("Atributo 2: Densidade Demografica - A01: %f / B02: %f", densidade1, densidade2);
            break;

        default:
        printf("Insira uma opção válida");
            break;
        }
    break;
    
    case 2:
    printf("Selecione mais um atributo\n");
    printf("1. População\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turisticos\n");
    printf("5. Densidade demográfica\n");
    printf("----------------------------\n");
    scanf("%i", &opcao2);

        switch (opcao2)
        {
        case 1:
        printf("Atributo 1: Área - A01: %f / B02: %f\n", area1, area2);
        printf("Atributo 2: População - A01: %f / B02: %f", populacao1, populacao2);
            break;

        case 3:
        printf("Atributo 1: Área - A01: %f / B02: %f\n", area1, area2);
        printf("Atributo 2: PIB - A01: %f / B02: %f", pib1, pib2);
            break;

        case 4:
        printf("Atributo 1: Área - A01: %f / B02: %f\n", area1, area2);
        printf("Atributo 2: Pontos Turisticos - A01: %i / B02: %i", pontosTuristicos1, pontosTuristicos2);
            break; 

        case 5:
        printf("Atributo 1: Área - A01: %f / B02: %f\n", area1, area2);
        printf("Atributo 2: Densidade Demografica - A01: %f / B02: %f", densidade1, densidade2);
            break;

        default:
        printf("Insira uma opção válida");
            break;
        }
    break;

    case 3:
    printf("Selecione mais um atributo\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("4. Número de pontos turisticos\n");
    printf("5. Densidade demográfica\n");
    printf("----------------------------\n");
    scanf("%i", &opcao2);

        switch (opcao2)
        {
        case 1:
        printf("Atributo 1: PIB - A01: %f / B02: %f\n", pib1, pib2);
        printf("Atributo 2: População - A01: %f / B02: %f", populacao1, populacao2);
            break;

        case 2:
        printf("Atributo 1: PIB - A01: %f / B02: %f\n", pib1, pib2);
        printf("Atributo 2: Área - A01: %f / B02: %f", area1, area2);
            break;

        case 4:
        printf("Atributo 1: PIB - A01: %f / B02: %f\n", pib1, pib2);
        printf("Atributo 2: Pontos Turisticos - A01: %i / B02: %i", pontosTuristicos1, pontosTuristicos2);
            break; 

        case 5:
        printf("Atributo 1: PIB - A01: %f / B02: %f\n", pib1, pib2);
        printf("Atributo 2: Densidade Demografica - A01: %f / B02: %f", densidade1, densidade2);
            break;
        
        default:
        printf("Insira uma opção válida");
            break;
        }
    break;

    case 4:
    printf("Selecione mais um atributo\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("5. Densidade demográfica\n");
    printf("----------------------------\n");
    scanf("%i", &opcao2);

        switch (opcao2)
        {
        case 1:
        printf("Atributo 1: Pontos Turisticos - A01: %f / B02: %f\n", pontosTuristicos1, pontosTuristicos2);
        printf("Atributo 2: População - A01: %f / B02: %f", populacao1, populacao2);
            break;

        case 2:
        printf("Atributo 1: Pontos Turisticos - A01: %f / B02: %f\n", pontosTuristicos1, pontosTuristicos2);
        printf("Atributo 2: Área - A01: %f / B02: %f", area1, area2);
            break;

        case 3:
        printf("Atributo 1: Pontos Turisticos - A01: %f / B02: %f\n", pontosTuristicos1, pontosTuristicos2);
        printf("Atributo 2: PIB - A01: %i / B02: %i", pib1, pib2);
            break; 

        case 5:
        printf("Atributo 1: Pontos Turisticos - A01: %f / B02: %f\n", pontosTuristicos1, pontosTuristicos2);
        printf("Atributo 2: Densidade Demografica - A01: %f / B02: %f", densidade1, densidade2);
            break;
        
        default:
        printf("Insira uma opção válida");
            break;
        }
    break;

    case 5:
    printf("Selecione mais um atributo\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turisticos\n");
    printf("----------------------------\n");
    scanf("%i", &opcao2);

        switch (opcao2)
        {
        case 1:
        printf("Atributo 1: Densidade Demografica - A01: %f / B02: %f\n", densidade1, densidade2);
        printf("Atributo 2: População - A01: %f / B02: %f", populacao1, populacao2);
            break;

        case 2:
        printf("Atributo 1: Densidade Demografica - A01: %f / B02: %f\n", densidade1, densidade2);
        printf("Atributo 2: Área - A01: %f / B02: %f", area1, area2);
            break;

        case 3:
        printf("Atributo 1: Densidade Demografica - A01: %f / B02: %f\n", densidade1, densidade2);
        printf("Atributo 2: PIB - A01: %i / B02: %i", pib1, pib2);
            break; 

        case 4:
        printf("Atributo 1: Densidade Demografica - A01: %f / B02: %f\n", densidade1, densidade2);
        printf("Atributo 2: Pontos Turisticos - A01: %f / B02: %f", pontosTuristicos1, pontosTuristicos2);
            break;
        
        default:
        printf("Insira uma opção válida");
            break;
        }
        break;
    default:
    printf("Insira uma opção válida");     
        break;
    }

    return 0; 
} 
