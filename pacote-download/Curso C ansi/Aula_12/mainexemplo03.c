#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// existe a função getche() para capturar teclado direto, quase igual scanf
// existe a função toupper() para converter todas as letras digitadas em maiúsculas



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//utilizar funcões

// Programa que calcule o quadrado de números inteiros

// Solicita ao usuário números inteiros e vai retornando o quadrado dos mesmos

// Condição para encerrar o programa: digitar o número 0.

// Funções auxiliares:

void display();
int leitura();
void square();




int main() {
	int valor;
	for(display();valor = leitura();display()){
		printf("Entrei no dentro do For...");
		system("PAUSE");
		printf("A variavel valor = %d\n", valor);
		system("PAUSE");
		
		
		square(valor);
		system("PAUSE");
		
		printf("Estou depois da funcao square(), variavel valor = %d\n", valor);
		system("PAUSE");
	}
	
	
	printf("Estou na ultima linha antes do return do main");
	system("PAUSE");
	
	return 0;
} //end main

void display(){
	printf("Digite zero para sair\n");
	printf("ou informe um inteiro para calcular o seu quadrado: ");
	
} //end display

int leitura(){
	
	
	int t;
	scanf("%d", &t);
	return t;
	
} //end leitura

void square(int numero){
	printf("%d\n", numero * numero);
	
} //end square


