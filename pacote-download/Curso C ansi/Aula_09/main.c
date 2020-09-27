#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*

	for(inicialização; condição; incremento){
		comandos;
	}

*/

int main(int argc, char *argv[]) {
	
	int i, j;
	
	for(i=0;i<=10;i++){
		printf("linha %d\n", i);
	}
	
	for(i=10;i>=0;i--){
		printf("linha %d\n", i);
	}
	
	for(i=0;i<=10;i++){
		for(j=10;j>=0;j--){
			printf("Coluna %d\n", j);
		}
		printf("Linha %d\n", i);
		
	}
	
	
	return 0;
}
