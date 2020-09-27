//  --- Bibliotecas Auxiliares ---
#include <stdio.h>
#include <stdlib.h>

//  --- Protótipo das Funções Auxiliares

int check(char *s);
void take_component();


//  --- Variáveis Globais

char databank[][40] = { // matriz contendo os componentes e respectivas características
						"BC547",		"TBJ NPN 625mW",
						"BC557",		"TBJ PNP 625mW",
						"TIP41",		"TBJ NPN 65W",
						"TIP42",		"TBJ PNP 65W",
						"TIP122",		"TBJ NPN Darlington 100V 5A",
						"TIP127",		"TBJ PNP Darlington 100V 5A",
						"2N2222",		"TBJ NPN High Frequency 500mW",
						"2N7000",		"Mosfet N channel",
						"IRF3205",		"Mosfet N channel 55V 98A",
};

char input[80];			//Matriz para entrada de dados (componente em pesquisa)
char component[80];		//Matriz passada como parâmetro para função check
char *point;			//Ponteiro




//  --- Função Principal ---

int main(int argc, char *argv[]) {
	int indice;													//Armazena o índice do componente
	char option;												//Armazena a opção escolhida
	
	do {														//loop
		printf("Informe o componente que deseja pesquisar: ");	//solicita que o usuário pesquise um componente
		gets(input);											//lê o componente digitado pelo usuário
		printf("\ninput = %c \n", input[0]);									
		point = &input;											//atribui a point o endereço da matriz input
		printf("\npoint = %c \n", *point);										
		printf("Caracteristicas do componente pesquisados: ");
		printf("\nChamou a funcao take_component()\n");
		take_component();										//pega o primeiro componente
		printf("\nVoltei da funcao take_component()\n");
		
		
		
		//Loop pra ler um componente por vez da matriz input e exibe suas características.
		do{
			//procura o índice do componente em databank
			indice = check(component);
			printf("\nIndice = %d\n", indice);
			//imprime as características do componente pesquisado
			if(indice != -1){
				printf("%s", databank[indice+1]);
			}else{
				printf("Sem registros no banco de dados \n");
			}
			take_component();									//Pega próxima palavra
			
		}while(*component);										//repete até encontrar uma string nula
		printf("\n");
		printf("Pesquisar mais? s-sim | n - nao \n");
		scanf("%c", &option);
		getchar();		
	}while(option == 's' || option == 'S');
	
	
	
	return 0;
}//end main


//  --- Desenvolvimento das Funções Auxiliares

int check(char *s){						//Retrona a localização de uma correspondência enntre a string apontada pelo parametro s

	int i;								//Variável de iterações

	for(i=0; *databank[i]; i++){		//Varre a matriz databank

		if(!strcmp(databank[i],s)){		//Comparação das matrizes databank e s
			break;
		}//end if
	}//end for
	if(*databank[i]){
		return(i);						//Retorna o índice corresponde, se uma correspondência existir
	}else{
		return(-1);						//Retorna -1 se não houver uma correspondência
	}

	
	
}//end check


/*
	take_component lê o próximo componente da matriz input. Cada componente é
	considerado como sendo separado por um espaço ou pelo terminador nulo.
	Nenhuma outra pontuação é permitida.
	O componente retornado será uma string de tamanho nulo quando o final da string input é encontrado.	
*/

void take_component(){
	
	char *q; 						//ponteiro auxiliar
	
	//Recarrega o endereço do componente toda vez que a função é chamada.
	q = component;
	
	//pega o próximo componente
	while(*point && *point!=' '){	//Shift no endereço dos índices da matriz databank
		*q = *point;
		point++;
		q++;		
	}//end while
	
	if(*point == ' '){
		point++;
	}	
	*q = '\0';						//terminador nulo
} //end take_component

