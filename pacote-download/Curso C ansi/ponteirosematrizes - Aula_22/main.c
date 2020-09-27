#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
	char matriz[80] = "TESTE DE FRASE";
	
	char *point;
	
	point = &matriz;
	
	
	for(i=0; matriz[i]; i++){
		
		printf("%c", tolower(*point++));
		
		//printf("%c", *point++);
	}
	printf("\nMatriz[16] = %c\n", matriz[16]);
	printf("I = %d", i);
	
	
	
	
	
	return 0;
}
