#include <stdio.h>
#include "matriz.h"

void multiplicacao(float matrizA[limite_linhas][limite_colunas], float matrizB[limite_linhas][limite_colunas], float matrizC[limite_linhas][limite_colunas], int num_linhas, int num_colunas, int num_colunas_mult){

    float valor = 0;

    for(i = 0; i < num_linhas; i++){
        for(j = 0; j < num_colunas; j++){
            for(x = 0; x < num_colunas_mult; x++){
                valor += matrizA[i][x] * matrizB[x][j];
            }
            matrizC[i][j] = valor;
        }
    }
    printf("FUNCAO EXECUTADA.\n");

}
