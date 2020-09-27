#include <stdio.h>
#define SIZE 5

void modifyArray( int b[], int size);
void modifyElement( int e );


int main( void ){

    int a[ SIZE ] = { 0, 1, 2, 3, 4 };
    int i;

    printf("Efeitos da passagem do array inteiro por referencia:\n\nOs valores do array original sao:\n");

    for(i = 0; i < SIZE; i++){
        printf("%3d", a[ i ]);

    }

    modifyArray( a, SIZE );

    printf("\nOs valores do array modificado sao:\n");

    for(i = 0; i < SIZE; i++){
        printf( "%3d", a[ i ]);
    }

    printf("\n\n\nEfeitos de passar elemento do array por valor:\n\nO valor de a[ 3 ] eh %d\n", a[ 3 ] );

    modifyElement(a[ 3 ]);

    printf("\nO valor de a[ 3 ] eh %d\n", a[ 3 ]);



    return 0;
}

void modifyArray( int b[], int size){
    int j;

    for(j = 0; j < size; j++){
        b[ j ] *= 2;
    }
}

void modifyElement( int e ){
    printf( "Valor em modifyElement eh %d\n", e *= 2 );
}
