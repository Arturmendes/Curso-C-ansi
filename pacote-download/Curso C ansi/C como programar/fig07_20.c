#include <stdio.h>

void imprimeArray(int *bPtr);

int main( void ){
    int b[] = { 10, 20, 30, 40 };
    int *bPtr = b;
    int i;
    int offset;

    printf( "Array b impresso com:\nNotacao de subscrito de array\n" );

    for(i = 0; i < 4; i++){
        printf("b[ %d ] = %d\n", i, b[ i ]);
    }

    printf( "\nNotacao de ponteiro/offset onde\no ponteiro eh o nome do array\n" );

    for( offset = 0; offset < 4; offset++ ){
        printf( "*( b + %d ) = %d\n", offset, *( b + offset ) );
    }

    printf( "\nNotacao de subscrito de ponteiro\n" );

    for( i = 0; i < 4; i++ ){
        printf( "bPtr[ %d ] = %d\n", i, bPtr[ i ] );
    }

    printf( "\nNotacao de ponteiro/deslocamento\n" );

    for( offset = 0; offset < 4; offset++ ){
        printf( "*( bPtr + %d ) = %d\n", offset, *( bPtr + offset ) );
    }






    return 0;
}

void imprimeArray(int *bPtr){
    int i;

    for(i = 0; i < 4; i++){
        printf("bPtr[ %d ] = %d\n", i, bPtr[ i ] );
    }

}
