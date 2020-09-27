#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define DIML 5
#define DIMC 30

void exemplo1();
void exemplo2();

int main(int argc, char *argv[]) {
	
	
	exemplo1();
	exemplo2();
	
	
	
	
	return 0;
}

void exemplo1(){
	int i, j;
	
	int matriz[DIML][DIMC];
	
	for(i = 0; i < DIML; i++){
		for(j = 0; j < DIMC; j++){
			//scanf("%d", &matriz[i][j]);
			//getchar();
			matriz[i][j]= i + j;
		}//end for aninhado
	}//end for
	
	for(i = 0; i < DIML; i++){
		for(j = 0; j < DIMC; j++){
			printf("%4d", matriz[i][j]);
		}
		printf("\n");
		
	}
	
}

void exemplo2(){
	
	int i, j;
	
	int nomes[DIML][DIMC];
	
	for(i = 0; i < DIML; i++){
		printf("Entre com a linha %d ", i);	
		scanf("%s", nomes[i])	;
		
	}//end for
	
	for(i = 0; i < DIML; i++){
		printf("O nome %d eh: ", i);
		printf(nomes[i]);
		printf("\n");
				
		
	}
	
}
