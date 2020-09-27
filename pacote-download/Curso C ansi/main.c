#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Funções auziliares

void display();
int leitura();
void square();

int main(int argc, char *argv[]) {
	int valor;
	
	for(display();valor = leitura() ; display()){
		square(valor);
	}

	
	return 0;
}

void display(){
	printf("Digite 0 para sair.");
	
	printf("Ou Digite um numero: ");
	
}

int leitura(){
	
	int t;
	scanf("%d", &t);
	return t;
	
}

void square(int numero){
	
	printf("O quadrado de %d:\n", numero);
	printf("%d", numero * numero);
	
}
