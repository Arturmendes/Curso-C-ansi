#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// &     *

// tipo *nome;



int main(int argc, char *argv[]) {
	
	int *ponteiro;                  // ponteiro para a vari�vel
	int variavel = 250;             // variavel inteira com o valor 250
	int exibe;                      // vari�vel que vai exibir o valor 250
	
	ponteiro = &variavel;           // ponteiro est� apontando para o endere�o da vari�vel
	
	exibe = *ponteiro;              // exibe -> recebe o conte�do do endere�o para o qual o ponteiro aponta
	
	                                // 250
	
	printf("\n %d \n", exibe);      // exibe 250 na tela
	printf("\n %d \n", ponteiro);   // exibe o endere�o da variavel 
	printf("\n %d \n", &variavel);  // exibe o endere�o da variavel
	printf("\n %d \n", *ponteiro);  // exibe o conteudo da variavel na tela 250
	printf("\n %d \n", &ponteiro);  // exibe o endere�o do ponteiro
	
	
	
	//printf("\n %d \n", *variavel);
	
	
	
	
	
	
	return 0;
}
