#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Objetivo: Encontrar o nome dos filmes do Steven Spielberg a partir de 2005

int main(){
    int a = 0;
    int b = 0;
    char leitor[500];
    char *reserva;
    char tok[255];
    char tok1[255];
    char tok2[255];
    char tok3[255];
    char tok4[255];
    char* separador = "\",:";
    FILE *arq = fopen("content.csv", "r");
    if(arq == NULL){
			printf("Erro, nao foi possivel abrir o arquivo\n");
			return -1;
    }
    int count2 = 0;
    while ((fgets(leitor, sizeof(leitor), arq))!=NULL && count2 < 2){  //Calcula o tamanho da linha e logo após, copia seu conteudo dentro do vetor leitor

            //reserva = strtok(leitor, separador);
            //printf( " %s\n", reserva );
            /*if(strstr (reserva,"Steven Spielberg")){
                       b++;

            }*/
            char * pch;
            printf ("%s\n",leitor);
            pch = strtok (leitor,separador);
            while (pch != NULL)
            {
                printf ("%s\n",pch);
                pch = strtok (NULL, separador);
            }


            /*if(strstr (leitor,"\"Director\":\"Steven Spielberg\"")){
               a++;
            }*/

            count2 ++;

    }
    printf( "%d\n", b );

    fclose(arq);

    return 0;
}
