#include <stdio.h>
#include "matriz.h"

void soma(float matrizA[limite_linhas][limite_colunas], float matrizB[limite_linhas][limite_colunas], float matrizC[limite_linhas][limite_colunas], int num_linhas, int num_colunas){
    for(i = 0; i < num_linhas; i++){
        for(j = 0; j < num_colunas; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("FUNCAO EXECUTADA.\n");
}
