#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// &     *

// tipo *nome;



int main(int argc, char *argv[]) {
	
	int *ponteiro;                  // ponteiro para a variável
	int variavel = 250;             // variavel inteira com o valor 250
	int exibe;                      // variável que vai exibir o valor 250
	
	ponteiro = &variavel;           // ponteiro está apontando para o endereço da variável
	
	exibe = *ponteiro;              // exibe -> recebe o conteúdo do endereço para o qual o ponteiro aponta
	
	                                // 250
	
	printf("\n %d \n", exibe);      // exibe 250 na tela
	printf("\n %d \n", ponteiro);   // exibe o endereço da variavel 
	printf("\n %d \n", &variavel);  // exibe o endereço da variavel
	printf("\n %d \n", *ponteiro);  // exibe o conteudo da variavel na tela 250
	printf("\n %d \n", &ponteiro);  // exibe o endereço do ponteiro
	
	
	
	//printf("\n %d \n", *variavel);
	
	
	
	
	
	
	return 0;
}
