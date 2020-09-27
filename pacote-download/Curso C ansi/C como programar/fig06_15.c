#include <stdio.h>
#define SIZE 10



int main( void ){
    //int a[ SIZE ] = { 20, 18, 17, 16, 15, 12, 11, 10, 9, 8 };
    int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    int pass;
    int i;
    int hold;
    int cont1 = 0;
    int cont2 = 0;

    printf( "Itens de dados na ordem original\n" );

    for( i = 0; i < SIZE; i++ ){
        printf( "%4d", a[ i ] );
    }
    printf("\n\n");

    /* bubble sort */

    for(pass = 1; pass < SIZE; pass++ ){



        for( i = 0; i < SIZE - 1; i++ ){
            if(a[ i ] > a[ i + 1 ]){
                hold = a [ i ];
                a[ i ] = a[ i + 1 ];
                a[ i + 1 ] = hold;
                cont1++;
            }
            cont2++;
        }
        printf( "\nItens de dados na passada numero: %d\n", pass);
        for( i = 0; i < SIZE; i++ ){
            printf( "%4d", a[ i ] );
        }
    }
    printf("\nNumeros de passadas dentro do if: %d\n", cont1);
    printf("\nNumeros de passadas dentro do for: %d\n", cont2);

    printf( "\n\n\nItens de dados em ordem crescente\n");

    for( i = 0; i < SIZE; i++){
        printf( "%4d", a[ i ] );
    }

    printf( "\n" );

    return 0;
}
