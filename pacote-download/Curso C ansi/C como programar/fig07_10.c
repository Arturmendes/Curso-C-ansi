#include <stdio.h>
#include <ctype.h>

void convertToUppercase( char *sPtr );

int main( void ){
    char string[] = "caracteres e R$ 32,98";

    printf( "A string antes da conversao eh: %s\n\n", string);
    convertToUppercase( string );

    printf( "A string apos a conversao eh: %s\n\n", string);

    return 0;
}

void convertToUppercase( char *sPtr ){

    while( *sPtr != '\0' ){
        if( islower( *sPtr ) ){
                *sPtr = toupper( *sPtr );
        }

        ++sPtr;
    }
}
