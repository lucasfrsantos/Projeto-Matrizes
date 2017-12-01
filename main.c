#include<stdio.h>
#include "matriz.h"
#include "menu.cpp"
#include "tamanhos.cpp"
#include "rands.cpp"
#include "prints.cpp"
#include "atribuir_valor.cpp"
#include "soma.cpp"
#include "subtracao.cpp"
#include "multiplicacao.cpp"
#include "imprimirtxt.cpp"


float matrizA[limite_linhas][limite_colunas];
float matrizB[limite_linhas][limite_colunas];
float matrizC[limite_linhas][limite_colunas];

int selecionado;

int main(){

    printf("Projeto - Manipulação de matrizes.\n\n");
    printf("Realizado por: Lilianne Fernandes, Lucas França e Victor Kaillo.\n\n");

    while(1){
        selecionado= menu_interativo();

        switch(selecionado){
        case 1:
            printf("\nFuncao (%d) selecionada\n\n", selecionado);

            tamanho_A();
            break;

        case 2:
            printf("\nFuncao (%d) selecionada\n\n", selecionado);

            tamanho_B();
            break;

        case 3:
            printf("\nFuncao (%d) selecionada\n\n", selecionado);

            valores_aleatorios(matrizA, linhas_A, colunas_A);
            break;

        case 4:
            printf("\nFuncao (%d) selecionada\n\n", selecionado);

            valores_aleatorios(matrizB, linhas_B, colunas_B);
            break;

        case 5:
            printf("\nFuncao (%d) selecionada\n\n", selecionado);

            atribuir_um(matrizA, linhas_A, colunas_A);
            break;


        case 6:
            printf("\nFuncao (%d) selecionada\n\n", selecionado);

            atribuir_um(matrizB, linhas_B, colunas_B);
            break;

        case 7:
            printf("\nFuncao (%d) selecionada\n\n", selecionado);

            atribuir_todos(matrizA, linhas_A, colunas_A);
            break;

        case 8:
            printf("\nFuncao (%d) selecionada\n\n", selecionado);

            atribuir_todos(matrizB, linhas_B, colunas_B);
            break;

        case 9:
            printf("\nFuncao (%d) selecionada\n\n", selecionado);

            if(linhas_A == linhas_B && colunas_A == colunas_B){

                linhas_C = linhas_A;
                colunas_C = colunas_A;

                soma(matrizA, matrizB, matrizC, linhas_A, colunas_A);

            }

            else{
                printf("A operação nao pode ser realizada, pois as matrizes A e B nao sao de mesma ordem!\n");
            }
            break;

        case 10:
            printf("\nFuncao (%d) selecionada\n\n", selecionado);

        if(linhas_A == linhas_B && colunas_A == colunas_B){

                linhas_C = linhas_A;
                colunas_C = colunas_A;

                subtracao(matrizA, matrizB, matrizC, linhas_A, colunas_A);

            }
            else{
                printf("A operação nao pode ser realizada, pois as matrizes A e B nao sao de mesma ordem!\n");
            }
            break;

        case 11:
            printf("\nFuncao (%d) selecionada\n\n", selecionado);

            if(colunas_A == linhas_B){

                linhas_C = linhas_A;
                colunas_C = colunas_B;

                multiplicacao(matrizA, matrizB, matrizC, linhas_C, colunas_C, colunas_A);

            }
            else{
                printf("A operaçao nao pode ser realizada, pois o numero de linhas de B\nnao eh igual ao numero de colunas de A\n");
            }
            break;

        case 12:
            printf("\nFuncao (%d) selecionada\n\n", selecionado);

            imprimir_matriz(matrizA, linhas_A, colunas_A);
            break;


        case 13:
            printf("\nFuncao (%d) selecionada\n\n",selecionado);

            imprimir_matriz(matrizB,  linhas_B, colunas_B);
            break;


        case 14:
            printf("\nFuncao (%d) selecionada\n\n", selecionado);

            imprimir_matriz(matrizC, linhas_C, colunas_C);
            break;

        case 15:
            printf("\nFuncao (%d) selecionada\n\n", selecionado);

            imprimir_TXT(matrizC, linhas_C, colunas_C);
            break;

        case 16:
            printf("\nFim da execuçao.  **  Agradecemos pela preferencia.  ** \n\n");

            exit(0);



        }
        printf("\n\n");
    }
    return 0;
}
