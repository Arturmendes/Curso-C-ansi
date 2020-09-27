#include <stdio.h>

#define TAM1 3
#define TAM2 2

void printArray( const int a[][TAM1]);

int main ( void ){
    int array1[ TAM2 ] [ TAM1 ] = { { 1, 2, 3 }, { 4, 5, 6 } };
    int array2[ TAM2 ] [ TAM1 ] = { 1, 2, 3, 4, 5 };
    int array3[ TAM2 ] [ TAM1 ] = { { 1, 2 }, { 4 } };

    printf( "Valores em array1 por linha sao:\n\n" );
    printArray( array1 );

    printf( "Valores em array2 por linha sao:\n\n" );
    printArray( array2 );

    printf( "Valores em array3 por linha sao:\n\n" );
    printArray( array3 );

    return 0;
}

void printArray( const int a[][TAM1]){
    int static cont = 0;
    int l;
    int c;

    cont++;

    if(cont == 1){
        printf( "Estou no array1\n\n" );

        for( l = 0; l < TAM2; l++ ){
            for( c = 0; c < TAM1; c++ ){
                printf( "%2d ", a[l][c]);
            }
            printf( "\n" );
        }
    }

    if (cont == 2){
        printf( "Estou no array2\n\n" );
        for( l = 0; l < TAM2; l++ ){
            for( c = 0; c < TAM1; c++ ){
                printf( "%2d ", a[l][c]);
            }
            printf( "\n" );
        }
    }

    if (cont == 3){
        printf( "Estou no array3\n\n" );
        for( l = 0; l < TAM2; l++ ){
            for( c = 0; c < TAM1; c++ ){
                printf( "%2d ", a[l][c]);
            }
            printf( "\n" );
        }
    }

    if (cont != 1 || cont !=2 || cont !=3){

    }

}
