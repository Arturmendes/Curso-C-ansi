#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Este é o projeto da aula 2
//do curso de linguagem C

int main(int argc, char *argv[]) {
	
	int numero; //isto é uma variável
	
	printf("Digite um numero: "); //imprimi a frase na tela
	scanf("%d", &numero); //lê o número que o usuário digita
	getchar();//limpa o buffer do teclado do PC
	printf("O numero eh igual a: %d\n\n5", numero);
	
	
	return 0;
}
