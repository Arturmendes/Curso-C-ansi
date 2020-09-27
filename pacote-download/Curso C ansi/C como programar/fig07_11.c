#include <stdio.h>
#include <ctype.h>

void printCharacters( const char *sPtr );

int main( void ){
    char string[] = "imprime caracteres de uma string";

    printf( "A string eh: ");
    printCharacters( string );
    printf( "\n\n" );



    return 0;
}


void printCharacters( const char *sPtr ){

    for( ; *sPtr != '\0'; sPtr++ ){
        if(sPtr[0]){
            printf("%c", toupper( *sPtr ));
        }
        printf( "%c", *sPtr );
    }
}
