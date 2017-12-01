#include <stdio.h>
#include "matriz.h"

int menu_interativo(){

int digitado;

    printf("PROGRAMA DE MANIPULACAO DE MATRIZES\n\n");
    printf(" (1) Definir o tamanho da matriz A\n");
    printf(" (2) Definir o tamanho da matriz B\n");
    printf(" (3) Preencher a matriz A com valores aleatorios\n");
    printf(" (4) Preencher a matriz B com valores aleatorios\n");
    printf(" (5) Atribuir valor para um elemento da matriz A\n");
    printf(" (6) Atribuir valor para um elemento da matriz B\n");
    printf(" (7) Atribuir valor a todos os elementos da matriz A\n");
    printf(" (8) Atribuir valor a todos os elementos da matriz B\n");
    printf(" (9) Calcular A+B\n");
    printf(" (10) Calcular A-B\n");
    printf(" (11) Calcular A*B\n");
    printf(" (12) Imprimir matriz A\n");
    printf(" (13) Imprimir matriz B\n");
    printf(" (14) Imprimir matriz C\n");
    printf(" (15) Imprimir matrizes em Arquivo TXT\n");
    printf(" (16) Sair\n");
    printf("Digite a operacao desejada: ");
    scanf("%i", &digitado);

    while(digitado < 1 || digitado > 16){

        printf("OPERAÇAO INVALIDA.\n");
        printf("Digite a operacao desejada novamente: ");
        scanf("%d", &digitado);
    }

    return digitado;
}
