#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*

	int x;
	
	while(x<10){
		//comandos...
		x++;
	
	}
	while(1){
		loop infinito
	
	}
	
	
	
	do{
	
		//comandos...
		
	
	
	
	}while(condição)
	

	

*/

int main(int argc, char *argv[]) {
	int opcao;
	
	do{
		
		printf("Digite a opcao 1 - sim, 2 - nao ");
		scanf("%d", &opcao);
		getchar();
		
	}while(opcao < 1 || opcao > 2);
	return 0;
}
