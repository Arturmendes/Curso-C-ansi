#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define dim 5

int main(int argc, char *argv[]) {
	int vetor1[dim] = {4, 5, 6, 9, 7};
	int vetor2[] = {15, 13, 7, 5, 6, 7, 8, 0, -1};
	int vetor3[] = {12, 13, 17, 20, 24, 25, 26, 30};
	
	unsigned i, tamanho;
	
	printf("\n Vetor com o tamanho pre definido\n");
	
	for(i = 0; i < dim; i++){
		printf("Elemento %d = %d \n", i, vetor1[i]);		
	}
	
	printf("\n Vetor terminado em -1\n");
	
	for(i = 0; vetor2[i] > -1 ; i++){
		printf("Elemento %d = %d \n", i, vetor2[i]);		
	}
	
	printf("\n Vetor com tamanho desconhecido\n");
	
	tamanho = sizeof(vetor3) / sizeof(int);
	
	for(i = 0; i < tamanho; i++){
		printf("Elemento %d = %d \n", i, vetor3[i]);		
	}
	
	return 0;
}
