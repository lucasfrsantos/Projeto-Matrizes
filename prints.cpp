#include <stdio.h>
#include "matriz.h"

void imprimir_matriz(float matriz[limite_linhas][limite_colunas], int num_linhas, int num_colunas){


    for(i = 0; i < num_linhas; i++){
        for(j = 0; j < num_colunas; j++){
            printf("%.2f ", matriz[i][j]);
        }
        printf("|\n");
    }
    printf("\n");
    printf("FUNCAO EXECUTADA !\n");

}
