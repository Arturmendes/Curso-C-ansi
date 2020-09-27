#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
	switch (variável)
	{
		case constante1:
			 comandos;
			 break;
		case constante2;
			 comandos;
			 break;
			 .
			 .
			 .
		default:
			comandos;	
	}
*/

// conversor de base numérica : decimal > hexadecimal e vice-versa
int main(int argc, char *argv[]) {
	
	int opcao;
	int valor;
	
	printf("Converter: \n");
	printf("1: decimal para hexadecimal\n");
	printf("2: hexadecimal para decimal\n");
	printf("\nInforme sua opcao: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("\nInforme o valor em decimal: ");
			scanf("%d", &valor);
			getchar();
			printf("%d em hexadecimal eh: %x", valor, valor);
			break;
		case 2:
			printf("\nInforme o valor em hexadecimal: ");
			scanf("%x", &valor);
			getchar();
			printf("%x em hexadecimal eh: %d", valor, valor);
			break;
		default:
			printf("Opcao invalida!\n");
			
	}
	
		
	
	
	return 0;
}
