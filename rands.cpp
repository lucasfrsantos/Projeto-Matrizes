#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matriz.h"

void valores_aleatorios(float matriz[limite_linhas][limite_colunas], int num_linhas, int num_colunas){

    float limite_max, limite_min;

    srand(time(NULL));

    printf("Digite o valor minimo do intervalo desejado: ");
    scanf("%f", &limite_max);

    printf("Digite o valor maximo do intervalo desejado: ");
    scanf("%f", &limite_min);


    for(i = 0; i < num_linhas ; i++){
        for(j = 0; j < num_colunas; j++){
                matriz[i][j] = ((rand()%1000)/999.0) * (limite_max - limite_min) + limite_min;
        }
    }

        printf("FUNCAO EXECUTADA.\n");
}
