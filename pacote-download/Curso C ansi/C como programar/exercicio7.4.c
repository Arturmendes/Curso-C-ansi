#include <stdio.h>

int main( void ){
    float *fPtr;
    float number1 = 3.3;
    float number2;

    fPtr = &number1;

    printf( "Valor para qual fPtr aponta eh: %.1f\n\n", *fPtr );

    number2 = *fPtr;

    printf( "Valor de number2 eh: %.1f\n\n\n", number2 );

    printf( "O endereco de number1 eh: %p\n\n", &number1 );

    printf( "O endereco de fPtr eh: %p\n\n", fPtr );



    return 0;
}
