#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define tam        5
#define falso      0
#define verdadeiro 1

void exemplo1();
void exemplo2();
void exemplo3();


int main(int argc, char *argv[]) {
	
	//exemplo1();
	//exemplo2();
	exemplo3();
	
	
	return 0;
}

void exemplo1(){
	int vetor[tam];
	unsigned i, numero;
	
	printf("Entrar com o numero inicial do vetor.");
	scanf("%d", &numero);
	getchar();
	
	//Gerar o vetor
	for(i=0;i<tam;i++){
		vetor[i] = numero++;
	}
	
	//Imprimir o vetor
	for(i=0;i<tam;i++){
		
		printf("Elemento %d = %d\n", i, vetor[i]);
	}	
}

void exemplo2(){
	/*
		Dois vetores e imprimir o produto escalar de ambos
		Vetor1 = 2, 3
		Vetor2 = 4, 8
		Produto = 2x4 + 3x8 = 32
	*/
	
	int vetor1[tam], vetor2[tam];
	int i, produto=0;
	
	printf("Entrar com o valor do vetor1 \n");
	for(i=0; i<tam; i++){
		printf("Elemento %d ", i);
		scanf("%d", &vetor1[i]);
		getchar();
	}
	
	printf("Entrar com o valor do vetor2 \n");
	for(i=0; i<tam; i++){
		printf("Elemento %d ", i);
		scanf("%d", &vetor2[i]);
		getchar();
	}
	
	for(i=0; i<tam; i++){
		produto += vetor1[i] * vetor2[i];
	}
	
	printf("O produto escalar eh igual a %d\n", produto);
	
	
}

void exemplo3(){
	int vetor[tam], i, change = falso, final = tam, store;
	
	printf("Entre com um vetor de %d elementos\n", tam);
	
	for(i=0; i<tam; i++){
		printf("Posicao %d ", i);
		scanf("%d", &vetor[i]);
		getchar();
	}
	
	for(i=0; i<tam; i++){
		printf("Posicao %d \n", vetor[i]);
	}
	
	do{
		
		change = falso;
		printf("Vetor 0: %d \n", vetor[0]);
		for (i=0;i<final; i++){
			if(vetor[i] > vetor[i+1]){ // vetor[0] = 5, vetor[1] = 2
				store = vetor[i]; // store = 5
				vetor[i] = vetor[i+1]; // vetor[0] = 2
				vetor[i+1] = store; // vetor[1] = 5
				change = verdadeiro;
			}
		}
	}while(change);
	
	for(i=0;i<tam; i++){
		printf("Posicao %d, vetor: %d \n", i, vetor[i]);
	}
	
	
	
}
