#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// existe a fun��o getche() para capturar teclado direto, quase igual scanf
// existe a fun��o toupper() para converter todas as letras digitadas em mai�sculas



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//utilizar func�es

// Programa que calcule o quadrado de n�meros inteiros

// Solicita ao usu�rio n�meros inteiros e vai retornando o quadrado dos mesmos

// Condi��o para encerrar o programa: digitar o n�mero 0.

// Fun��es auxiliares:

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


