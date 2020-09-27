#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//continue

// Imprimir os números pares de 0 a 100

// Máquina de codificação

void codifica();

int main(int argc, char *argv[]) {
	/*
	int x;
	
	for(x=0; x<=100; x++){
		
		if(x % 2) continue;
		
		printf("%d\n", x);
		
	}
	*/
	
	printf("Entrar com as letras para codificar\n");
	printf("Digite $ para sair.\n");
	codifica();
	
	
	
	
	
	return 0;
} //end main

void codifica(){
	char ok = 0, ch;
	
	while(!ok){
		ch = getche();
		if(ch == '$'){
			//ok = 1;
			continue;
			ok = 1;
		}
		printf("%c", ch + 2);
	}
	
} //end codifica
