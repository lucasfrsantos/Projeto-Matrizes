#ifndef MATRIZ_H
#define MATRIZ_H

#define limite_linhas 10
#define limite_colunas 10

int i, j, x;


int linhas_A, colunas_A;
int linhas_B, colunas_B;
int linhas_C, colunas_C;


int Escrever_Menu();


void tamanho_A();


void tamanho_B();


void valores_aleatorios(float matriz[limite_linhas][limite_colunas], int num_linhas, int num_colunas);


void imprimir_matriz(float matriz[limite_linhas][limite_colunas], int num_linhas, int num_colunas);


void atribuir_um(float matriz[limite_linhas][limite_colunas], int num_linhas, int num_colunas);


void atribuir_todos(float matriz[limite_linhas][limite_colunas], int num_linhas, int num_colunas);


void soma(float matrizA[limite_linhas][limite_colunas], float matrizB[limite_linhas][limite_colunas], float matrizC[limite_linhas][limite_colunas], int num_linhas, int num_colunas);


void subtracao(float matrizA[limite_linhas][limite_colunas], float matrizB[limite_linhas][limite_colunas], float matrizC[limite_linhas][limite_colunas], int num_linhas, int num_colunas);


void multiplicacao(float matrizA[limite_linhas][limite_colunas], float matrizB[limite_linhas][limite_colunas], float matrizC[limite_linhas][limite_colunas], int num_linhas, int num_colunas, int num_colunas_mult);



void Imprimir_TXT();

#endif // MATRIZ_H
