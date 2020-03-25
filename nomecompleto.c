/******           Nome Completo          ******/
/* Programa que retorna o nome da pessoa,     */
/* dado os argumentos -pn e -sn.              */
/*                                            */
/* Criado por: https://github.com/FernandoMPN */
/**********************************************/

#include <stdio.h>
#include <stdlib.h> // Alocação dinâmica
#include <string.h> // Manipulação de strings 

int main(int argc, char* argv[]){

    char *nome = NULL; 
    char *sobrenome = NULL;

    //Percorre o vetor de argumentos
    for(int i=0; i < argc; i++){

        //Acha o localizador de parâmetro que deseja encontrar
        if( strcmp("-pn", argv[i]) == 0 ){

            //Aloca espaço suficiente na memória para armazenar o parâmetro
            nome = malloc(strlen(argv[i+1]) * sizeof(char) + 1); 
            //Copia o parâmetro para a variável
            strcpy(nome, argv[i+1]);

        }else if( strcmp("-sn", argv[i]) == 0 ){

            sobrenome = malloc(strlen(argv[i+1]) * sizeof(char) + 1);
            strcpy(sobrenome, argv[i+1]);

        }

    }

    printf("O nome da pessoa é %s %s", nome, sobrenome);

    free(nome); free(sobrenome);

    return 0;

}