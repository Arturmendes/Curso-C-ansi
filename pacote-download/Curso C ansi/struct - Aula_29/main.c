#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Estruturas de dados
/*
	Struct
*/

struct componente{
	char tipo[20];
	char referencia[4];
	unsigned char num_ref;
	int valor;
	char unidade[10];
}comp;

struct componente comp2, comp3;

int main(int argc, char *argv[]) {
	
	printf("tipo do componente________________: ");
	fflush(stdin);
	fgets(comp.tipo, 20, stdin);
	
	printf("Referencia do componente__________: ");
	fflush(stdin);
	fgets(comp2.referencia, 4, stdin);
	
	printf("Numero da referencia______________: ");
	scanf("%c", &comp.num_ref);
	getchar();
	
	printf("Valor do componente_______________: ");
	scanf("%d", &comp.valor);
	getchar();

	printf("Unidade___________________________: ");
	fflush(stdin);
	fgets(comp3.unidade, 10, stdin);
	
	printf("\n\nCOMPONENTE CRIADO: \n\n");
	printf("%s\n", comp.tipo);
	printf("%s", comp2.referencia);
	printf("%c", comp.num_ref);
	printf("\nValor: %d", comp.valor);
	printf(" %s \n\n", comp3.unidade);
	
	
	
	
	return 0;
}
