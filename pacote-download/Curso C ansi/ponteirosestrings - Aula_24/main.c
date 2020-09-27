#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void exemplo1();
void exemplo2();


int main(int argc, char *argv[]) {
	
	exemplo1();
	
	printf("\n");
	
	exemplo2();
	
	return 0;
}

void exemplo1(){
	char *point;
	
	point = "Teste de string qualquer";
	
	printf("\n");
	printf(point);
	printf("\n");
	
	
}

void exemplo2(){
	char str[50];
	
	char *point;
	
	int i; //iterações
	
	printf("Entre com uma string: ");
	gets(str);
	
	for(i=0; str[i] && str[i] != ' '; i++);
		
	
	
	point = &str[i];
	
	printf("\n");
	printf(point);
	printf("\n");
	
	
}
