#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	/*
		if (condição)
		{
			comandos;
		}else if(condição){
			comandos;		
		}else{
			comandos;
		}
		
		
		
		
		
		if(condição) comando;
		
		
		
	
	*/

int main(int argc, char *argv[]) {
	int a;
	int b;
	
	printf("Digite um valor: ");
	scanf("%d", &a);
	getchar();
	printf("Digite um outro valor: ");
	scanf("%d", &b);
	getchar();
	
	
	if(a < b){
		printf("%d menor que %d", a, b);
	}else if(b < a){
		printf("%d menor que %d", b, a);
	}else{
		printf("%d igual a %d", a, b);
	}

	
	return 0;
}
