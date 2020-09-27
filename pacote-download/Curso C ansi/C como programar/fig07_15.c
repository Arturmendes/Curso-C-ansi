#include<stdio.h>
#define SIZE 10

void bubleSort( int * const array, const int size );

void mostrarArray(int *const array);

int main( void ){

    int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    int i;

    printf( "Itens de dados na ordem original\n" );
    mostrarArray(a);

    bubleSort( a, SIZE );

    printf( "\nItens de dados em ordem crescente\n" );

    mostrarArray(a);

    printf("\n");


    return 0;
}


void bubleSort( int * const array, const int size ){
    void swap( int *element1Ptr, int *element2Ptr );
    int pass;
    int j;

    for( pass = 0; pass < size - 1; pass++ ){
        for( j = 0; j < size -1; j++){
            if( array[j] > array[ j + 1]){
                swap( &array[j], &array[j + 1]);
            }

        }
    }

}

void swap( int *element1Ptr, int *element2Ptr ){
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;

}

void mostrarArray(int *const array){
    int i;

    for( i = 0; i < SIZE; i++){
        printf( "%4d", array[i]);
    }

    printf("\n\n");
}
