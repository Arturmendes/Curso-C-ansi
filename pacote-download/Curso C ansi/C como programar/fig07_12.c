#include <stdio.h>

void f( const int *xPtr );

int main( void ){
    int y = 100;

    printf("O endereco de y eh: %p\n\n", &y);

    f( &y );

    return 0;
}

void f( const int *xPtr ){
    printf("O endereco para o qual xPtr aponta eh: %p\n\n", xPtr);
    //*xPtr = 100; // Erro (nao pode ser modificado)
    printf("O valor para qual xPtr apota eh: %d\n\n", *xPtr);

    printf("O endereco de &*xPtr eh: %p\n\n", &*xPtr);

    printf("O endereco de *&xPtr eh: %p\n\n", *&xPtr);

    printf("O endereco de &xPtr eh: %p\n\n", &xPtr);
}


