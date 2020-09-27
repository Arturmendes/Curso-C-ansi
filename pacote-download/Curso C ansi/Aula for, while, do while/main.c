#include <stdio.h>
#include <stdlib.h>
#include <dos.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num, i;
	long int fat=1;
	printf("Digite um numero para calcular o fatorial->\n");
	scanf("%d", &num);
	
	for(i = num; i > 0; i--){
		fat *= i;
	}
	
	
	
	printf("Fatorial de %d eh: %d", num, fat);
	




}
