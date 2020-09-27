#include <stdio.h>
#define SIZE 10

int main( void ){
    // a)
    float numbers[ SIZE ] = { 0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
    // b)
    float *nPtr = numbers;
    // d)
    nPtr = numbers;
    nPtr = &numbers[ 0 ];
    int i;

    // c)
    for( i = 0; i < SIZE; i++ ){
        printf( "%.1f", numbers[ i ] );
        printf(", ");

    }

    printf("\n\n");

    // e)
    for( i = 0; i < SIZE; i++ ){
        printf( "%.1f, ", *( nPtr + i ) );
    }

    printf("\n\n");

    //f)
    for( i = 0; i < SIZE; i++ ){
        printf( "%.1f, ", *( numbers + i ) );
    }

    printf("\n\n");

    // g)
    for( i = 0; i < SIZE; i++ ){
        printf( "%.1f, ", nPtr[ i ] );
    }

    printf("\n\n");

    // h)

    printf( "%.1f\n", numbers[ 4 ] );
    printf( "%.1f\n", *(numbers + 4) );
    printf( "%.1f\n", nPtr[ 4 ] );
    printf("%.1f\n", *(nPtr + 4) );


    printf("\n\n");

    // i)

    printf( "O endereco de &numbers eh: %d\n", &numbers );
    printf( "O endereco de &numbers + 8 eh: %d\n", nPtr + 8 );
    printf( "O elemento que esta em &numbers + 8 eh: %.1f\n", nPtr + 8 );

    printf("\n\n");

    // j)

    nPtr = &numbers[ 5 ];


    printf( "O endereco de &nPtr eh: %d\n", nPtr );
    printf( "O valor para qual nPtr aponta eh: %.1f\n", *nPtr );
    printf( "O elemento que esta em &numbers + 8 eh: %.1f\n", nPtr + 8 );

    printf("\n\n");



return 0;
}
