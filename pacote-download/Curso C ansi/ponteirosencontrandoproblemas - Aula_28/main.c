#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Este programa não deve ser executado

void exemplo1();

int main(int argc, char *argv[]) {
	
	int var2, *pointer;
	
	var2 = 88;
	
	pointer = &var2;
	
	printf("%d", *pointer);
	
	
	
	
	
	
	
	return 0;
}

void exemplo1(){
	int var;
	int *pointer;
	
	var = 46;
	
	*pointer = var; // nao pode tem que colocar &var;
	
}
