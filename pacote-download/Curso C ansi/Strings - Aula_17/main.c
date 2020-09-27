#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void concatenar();
void comprimento();

int main(int argc, char *argv[]) {
	
	
	concatenar();
	
	
	return 0;
}


void concatenar(){
	
	char nome[51], sobrenome[50]; //ultimo caracter /0
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	getchar();
		
	printf("Digite seu sobrenome: ");
	scanf("%s", &sobrenome);
	getchar();
	
	comprimento();
	printf("\n");
		
	strcat(nome, " ");
	strcat(nome, sobrenome);
	
	printf("Seu nome completo eh: %s", nome);	
	
}

void comprimento(){
	char nome[51] = "ARTUR", sobrenome[51] = "MENDES";
	int compNome, compSobrenome;
	
	compNome = strlen(nome);
	compSobrenome= strlen(sobrenome);
	
	printf("Seu nome tem %d caracteres e seu sobrenome tem %d caracteres.", compNome, compSobrenome);
	printf("\n");
	printf(strlwr(nome));
	strcpy(nome, "outro nome");
	printf("\n");	
	printf(nome);
	
}


