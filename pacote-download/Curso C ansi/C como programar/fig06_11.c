

#include <stdio.h>

void staticArrayInit( void );
void automaticArrayInit( void );


int main( void ){

    printf( "Primeira chamada para cada funcao:\n");
    staticArrayInit();
    automaticArrayInit();

    printf( "\n\nSegunda chamada para cada funcao:\n");
    staticArrayInit();
    automaticArrayInit();
    return 0;
}


void staticArrayInit( void ){


    static int array1[ 3 ];
    int i;

    printf( "\nValores na entrada de staticArrayInit:\n" );


    for(i = 0; i <= 2; i++ ){
        printf( "array1[ %d ] = %d ", i, array1[ i ] );
    }

    printf( "\nValores na saida de staticArrayInit:\n" );


    for ( i = 0; i <=2; i++ ){
        printf( "array1[ %d ] = %d ", i, array1[ i ] += 5 );
    }

    printf("\n\n\n");
}


void automaticArrayInit( void ){


    int array2[ 3 ] = { 1, 2, 3 };
    int i;

    printf( "\n\nValores na entrada de automaticArrayInit:\n" );


    for( i = 0; i <= 2; i++ ){
        printf("array2[%d] = %d ", i, array2[ i ]);
    }

    printf("\nValores na saida de automaticArrayInit:\n");


    for(i = 0; i <= 2; i++){
        printf( "array2[ %d ] = %d ", i, array2[ i ] += 5);
    }
    printf("\n\n\n");
}
