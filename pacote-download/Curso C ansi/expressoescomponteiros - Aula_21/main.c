#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Express�es e Aritm�tica com Ponteiros


void exemplo1();
void exemplo2();


int main(int argc, char *argv[]) {	
	
	exemplo2();
	
	return 0;
}

void exemplo1(){
	
	
	int teste;
	
	int *point1, *point2;
	
	teste = 500;
	
	point1 = &teste;
	
	point2 = point1;
	
	printf("\n No local %p ", point2); // endere�o de teste em hexadecimal
	
	printf(" encontra-se o valor %d \n", *point2);
	
	
}

void exemplo2(){
	
	int    *itPoint;
	
	char   *chPoint;
	
	float  *flPoint;
	
	printf("\n %d \n", itPoint); // endere�o do ponteiro inteiro
	
	itPoint++;
	
	printf("\n %d \n", itPoint); // endere�o deslocado em 4 bytes
	
	
	printf("\n %d \n", chPoint); // endere�o do ponteiro caractere
	
	chPoint++;
	
	printf("\n %d \n", chPoint); // endere�o deslocado em 1 bytes
	
	
	printf("\n %d \n", flPoint); // endere�o do ponteiro float
	
	flPoint= flPoint + 4; // 4 bytes x 4 = 16 bytes
	
	printf("\n %d \n", flPoint); // endere�o deslocado em 4 bytes
	
	
	
	
}
