#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Aplicação : jogo "acerte o valor"

int main(int argc, char *argv[]) {
	int i;
	
	for(i=0; i!=12; ){
		printf("Digite o numero correto: ");
		scanf("%d", &i);
	}
	
	return 0;
}
