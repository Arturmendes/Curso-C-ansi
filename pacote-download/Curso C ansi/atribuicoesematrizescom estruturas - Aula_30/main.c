#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Estruturas de dados
/*
	Struct
*/



void exemplo1();

void exemplo2();

int main(int argc, char *argv[]) {
	
	exemplo2();
	

	
	
	
	
	return 0;
}

void exemplo1(){
	
	struct minha_estrutura{
		int inteiro;
		double flutuante;
	};
	
	struct minha_estrutura exemplo1, exemplo2;
	
	exemplo1.inteiro = 100;
	
	exemplo2 = exemplo1;
	
	printf("%d \n", exemplo2.inteiro);
	
	
}

void exemplo2(){
	
	struct minha_estrutura{
		int inteiro;
		double flutuante;
	};
	
	struct minha_estrutura exemplo1, exemplo2;
	
	exemplo2.flutuante = 55.7;
	
	exemplo1 = exemplo2;
	
	printf("%lf \n", exemplo1.flutuante);
	
	
	
	
}
