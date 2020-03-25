
#Argumentos em C
#####Padrão para leitura de argumentos utilizando a linguagem C.

####Código base

Para ler os argumentos de um programa, é necessário adicionar dois parâmetros na *main* do seu código.

	#include <stdio.h>
	
	int main(int argc, char* argv[]){
		
		/*Seu código aqui*/
		
		return 0;
	}

|  Parâmetro |   |
| ------------ | ------------ |
| int argc  | Quantidade de argumentos lidos |
| char* argv  | Vetor de strings que armazena cada argumento lido |

>OBS: o parâmetro **char* argv[]** também pode ser substituído por **char* argv**

###Exemplo de implementação

Código que mostra a quantidade de argumentos inseridos e exibe cada um deles.

	#include <stdio.h>

	int main(int argc, char* argv[]){

		printf("Quantidade de parametros inseridos: %d\n", argc);

		for(int i=0; i<argc; i++){
			printf("Parametro %d: %s\n", i, argv[i]);
		}

		return 0;

	}

>Veja também a implementação de um outro tipo de programa que utiliza argumentos na sua execução em **nomecompleto.c**

###Links úteis
____

Alguns sites que abordam com mais detalhes o uso de argumentos em C

- [Argumentos em linha de comando](http://linguagemc.com.br/argumentos-em-linha-de-comando/ "Argumentos em linha de comando")
- [Argumentos e Parâmetros em C](http://mindbending.org/pt/argumentos-e-parametros-em-c "Argumentos e Parâmetros em C")
