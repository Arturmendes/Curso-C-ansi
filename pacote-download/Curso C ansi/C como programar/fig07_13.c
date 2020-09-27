#include<stdio.h>

int main( void ){
    int x = 10;
    int y;

    int *const ptr = &x;

    printf("O valor de x eh: %d\n\n", x);
    printf("O valor de *ptr eh: %d\n\n", *ptr);
    printf("O endereco de x eh: %p\n\n", &x);
    printf("O endereco de ptr eh: %p\n\n", ptr);


    *ptr = 7;

    printf("O valor de x eh: %d\n\n", x);
    printf("O valor de *ptr eh: %d\n\n", *ptr);
    printf("O endereco de x eh: %p\n\n", &x);
    printf("O endereco de ptr eh: %p\n\n", ptr);

    //ptr = &y; // erro: ptr é const; não pode atribuir novo endereco

    return 0;
}
