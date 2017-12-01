#include <stdio.h>
#include "matriz.h"

void tamanho_A(){

    printf("Digite o numero de Linhas da matriz A 1: \n");
    scanf("%i", &linhas_A);

    while(linhas_A > limite_linhas){

        printf("Valor excede o permitido pelo programa! ** [ max 10 ] ** \n");
        printf("Digite o numero de Linhas da matriz A: ");
        scanf("%i", &linhas_A);
    }

    printf("Digite o numero de Colunas da matriz A : ");
    scanf("%i", &colunas_A);

    while(colunas_A > limite_colunas){

        printf("Valor excede o permitido pelo programa! ** [ max 10] ** \n");
        printf("Digite o numero de Colunas da matriz A: \n");
        scanf("%i",&colunas_A);
    }

    printf("FUNCAO EXECUTADA. \n");
}

void tamanho_B(){

    printf("Digite o numero de Linhas da matriz B: \n");
    scanf("%i", &linhas_B);

    while(linhas_B > limite_linhas){

        printf("Valor excede o permitido pelo programa! ** [ max 10 ] ** \n");
        printf("Digite o numero de Linhas da matriz B: ");
        scanf("%i", &linhas_B);
    }

    printf("Digite o numero de Colunas da matriz B: ");
    scanf("%i", &colunas_B);

    while(colunas_B > limite_colunas){

        printf("Valor excede o permitido pelo programa! ** [ max 10 ] ** \n");
        printf("Digite o numero de Colunas da matriz B: \n");
        scanf("%i",&colunas_B);
    }

    printf(" FUNCAO EXECUTADA. \n");
}
