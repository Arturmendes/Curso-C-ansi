#include <stdio.h>
#define SIZE 10

void bubble( int work[], const int size, int (*compare)(int a, int b) );
int ascending( int a, int b );
int descending( int a, int b );

int main( void ){
    int order;
    int counter;

    int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    ordem:
    printf( "Digite 1 para classificar em ordem crescente,\n"
            "Digite 2 para classificar em ordem decrescente: ");
    scanf( "%d", &order );

    printf( "\nItens de dados na ordem original\n");

    for( counter = 0; counter < SIZE; counter++ ){
        printf( "%5d", a[ counter ] );
    }

    printf( "\n" );

    if( order == 1 ){
        bubble( a, SIZE, ascending );
        printf( "\nItens de dados em ordem crescente.\n" );
    }else if( order == 2 ){
        bubble( a, SIZE, descending );
        printf( "\nItens de dados em ordem decrescente.\n" );
    }else{
        printf( "Digite uma opcao valida: \n\n");
        goto ordem;

    }

    for( counter = 0; counter < SIZE; counter++ ){
        printf( "%5d", a[ counter ] );
    }

    printf( "\n" );
    return 0;
}


void bubble( int work[], const int size, int (*compare)(int a, int b) ){
    int passada;
    int contador;

    void inverte( int *element1Ptr, int *element2Ptr );

    for(passada = 1; passada < size; passada++ ){
        for( contador = 0; contador < size - 1; contador++ ){
        	printf( "work[%d] = %d, work[%d + 1] = %d\n\n", contador, work[contador], contador + 1, work[ contador + 1 ] );
        	system("pause");
            if( (*compare)( work[ contador ], work[ contador + 1 ] ) ){            	
                inverte( &work[ contador ], &work[ contador + 1 ] );
            }
        }
    }
}

void inverte( int *element1Ptr, int *element2Ptr ){
    int aux;

    aux = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = aux;
}



int ascending( int a, int b ){
    return b < a;
}


int descending( int a, int b ){
    return b > a;
}
