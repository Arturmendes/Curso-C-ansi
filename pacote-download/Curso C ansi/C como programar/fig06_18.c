#include <stdio.h>
#define SIZE 100000

int linearSearch( const int array[], int key, int size );

int main( void ){

    int a[ SIZE ];
    int x;
    int searchKey;
    int element;

    for( x = 0; x < SIZE; x++ ){
        a[ x ] = 2 * x;
    }

    printf( "Digite chave de pesquisa de inteiro: ");
    scanf( "%d", &searchKey );

    element = linearSearch( a, searchKey, SIZE );

    if( element != -1 ){
        printf( "Valor encontrado no elemento %d\n", element );
        printf( "Valor do element[ %d ] = %d\n", element, a[element]);
    }else{
        printf( "Valor nao encontrado\n" );
    }

    return 0;
}


int linearSearch( const int array[], int key, int size ){
    int n;

    for ( n = 0; n < size; ++n ){
        if( array[ n ] == key ){
            return n;
        }
    }

    return -1;
}
