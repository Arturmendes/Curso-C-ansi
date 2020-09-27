#include<stdio.h>
#define TAM 20

size_t getSize( float *ptr );

int main( void ){
    float array [ TAM ];

    printf( "O numero de bytes no array eh %d"
            "\nO numero de bytes retornados por getSize eh %d\n",
            sizeof( array ), getSize( array ) );
    return 0;
}

size_t getSize( float *ptr ){
    return sizeof( ptr );
}
