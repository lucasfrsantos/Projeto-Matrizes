        #include <stdio.h>
    #include <string.h>
    #include "matriz.h"
    #include<stdlib.h>

    void imprimir_TXT(float matriz[limite_linhas][limite_colunas],int num_linhas, int num_colunas){

        FILE *arquivo;



        printf("Um arquivo .txt com a matriz foi salvo no seguinte diretório:  **  /home/lucas/Documentos  **  \n");

      arquivo = fopen("/home/lucas/Documentos/Matriz_C.txt","w");

      if(arquivo == NULL){
        printf("nao abriu o arquivo\n");

      exit(0);

      }

      fprintf(arquivo,"Matriz C \n\n");
      fprintf(arquivo,"Ordem: %d x %d\n\n", num_linhas, num_colunas);

      for(i=0; i< num_linhas; i++){
        for(j=0; j < num_colunas; j++){
          fprintf(arquivo,"%.2f ",matriz[i][j]);
        }
        fprintf(arquivo,"\n");
    }
      fclose(arquivo);

     }
