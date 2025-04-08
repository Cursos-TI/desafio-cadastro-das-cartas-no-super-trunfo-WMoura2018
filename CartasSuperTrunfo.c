#include <stdio.h>
#include <ctype.h> 

int main (){

    //carta1
    int populaçao, numeros; // numeros de pontos turisticos
    int area, pib; // area em km²
    char codigo, cidade[20]; // codigo da cidade e nome
    char nome; 

    //carta2 
    int populaçao2, numeros2; // numeros de pontos turisticos
    int area2, pib2; // area em km²
    char codigo2, cidade2[20]; // codigo da cidade e nome
    char nome2; 


    
    printf("Carta 1:\n"); 
    printf("Digite a letra do estado: ");
    scanf("%s", &nome);

    printf("Digite o numero de 1 a 9: ");
    scanf("%2d", &codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);

    printf("Digite a populaçao da cidade: ");
    scanf("%d", &populaçao);

    printf("Digite a Area em km²: ");
    scanf("%d", &area);

    printf("Digite o pib: ");
    scanf("%d", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numeros);

    ///////////////////////////////////////////////////////// carta 2

    printf("Carta 2:\n"); 
    printf("Digite a letra do estado: ");
    scanf("%s", &nome2);

    printf("Digite o numero de 1 a 9: ");
    scanf("%2d", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);

    printf("Digite a populaçao da cidade: ");
    scanf("%d", &populaçao2);

    printf("Digite a Area em km²: ");
    scanf("%d", &area2);

    printf("Digite o pib: ");
    scanf("%d", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numeros2);

    printf("\nCarta 1: \n");
    printf("\n");
    printf("Estado: %c\n", nome);
    printf("Codigo: %c%02d\n", toupper(nome), codigo);
    printf("Cidade: %s\n", cidade);
    printf("População da cidade: %d\n", populaçao);
    printf("Area em km²: %d\n", area);
    printf("Pib: %d\n", pib);
    printf("Quantidade de pontos turisticos: %d\n", numeros);

    /////////////////////////////////////////////carta 2

    printf("\nCarta 2: \n");
    printf("\n");
    printf("Estado: %c\n", nome2);
    printf("Codigo: %c%02d\n", toupper(nome2), codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População da cidade: %d\n", populaçao2);
    printf("Area em km²: %d\n", area2);
    printf("Pib: %d\n", pib2);
    printf("Quantidade de pontos turisticos: %d\n", numeros2);



    return 0;

}