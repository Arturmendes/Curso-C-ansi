#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int opcao;
	int valor;
	int i;
	
	printf("Conversor Bases Numericas \n");
	printf("1: decimal para hexadecimal \n");
	printf("2: hexadecimal para decimais\n");
	printf("\n\nInforme a opcao: ");
	scanf("%d", &opcao);
	getchar();
	
	if(opcao == 1){
		printf("\nInformar o valor em decimal: ");
		scanf("%d", &valor);
		getchar();
		printf("%d em hexadecimal eh: %x", valor, valor);
	}else if(opcao ==2){
		printf("\nInformar o valor em hexadecimal: ");
		scanf("%x", &valor);
		getchar();
		printf("%x em decimal eh : %d", valor, valor);		
	}else{
		printf("Opcao invalida!");
	}
	
	for(i=0; i<100; i++){
		printf("%d em hexadecimal eh: %x\n", i, i);
	}
	
	
	return 0;
}
