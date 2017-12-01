#include <stdio.h>
#include "matriz.h"

void atribuir_um(float matriz[limite_linhas][limite_colunas], int num_linhas, int num_colunas){
    int posicao_linha, posicao_coluna ;

    float valor;

    printf("Digite a posição da linha do elemento que deseja preencher: ");
    scanf("%i", &posicao_linha);
    while(posicao_linha > num_linhas){
        printf("Numero invalido. Digite a posicao da linha do elemento que deseja preencher: ");
        scanf("%d", &posicao_linha);
    }

    printf("Digite a posição da coluna do elemento que deseja preencher: ");
    scanf("%i", &posicao_coluna);
    while(posicao_coluna+1 > num_colunas){
        printf("Numero invalido. Digite a posicao da coluna do elemento que deseja preencher : ");
        scanf("%d", &posicao_coluna);

    }

    printf("Digite o valor que deseja atribuir a posicao %ix%i da matriz: ",posicao_linha,posicao_coluna);
    scanf("%f", &valor);

    posicao_linha = posicao_linha-1;
    posicao_coluna = posicao_coluna-1;



    matriz[posicao_linha][posicao_coluna] = valor;
}

void atribuir_todos(float matriz[limite_linhas][limite_colunas], int num_linhas, int num_colunas){

float valor;


    for(i = 0; i < num_linhas; i++){
        for(j = 0; j < num_colunas; j++){
            printf("Digite o valor do elemento da posicao linha %i e coluna %i [%ix%i]: ", i+1, j+1, i+1,j+1);
            scanf("%f", &valor);

            matriz[i][j] = valor;
        }
    }
}
