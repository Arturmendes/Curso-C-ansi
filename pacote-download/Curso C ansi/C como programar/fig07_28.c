#include <stdio.h>

void function1( int a );
void function2( int b );
void function3( int c );


int main( void ){

    void (*f[ 3 ])(int) = { function1, function2, function3 };

    int choice;

    printf( "Digite um numero entre 0 e 2, 3 para sair: " );
    scanf( "%d", &choice );

    while ( choice >= 0 && choice < 3 ){
        (*f[ choice ])( choice );

        printf( "Digite um numero entre 0 e 2, 3 para sair: " );
        scanf( "%d", &choice );

    }

    printf( "Execucao do programa concluida.\n");
    return 0;
}



void function1( int a ){
    printf( "Function1.\n");


}


void function2( int b ){
    printf( "Function2.\n");


}


void function3( int c ){
    printf( "Function3.\n");


}
