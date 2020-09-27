
#include <stdio.h>

int main( void ){

    int x = 5;
    int y;

    const int *const ptr = &x;

    printf("O conteudo de ptr eh: %d\n\n", *ptr);
    printf("O endereco de x eh: %p\n\n", &x);
    printf("O endereco para qual ptr aponta eh: %p\n\n", ptr);
    printf("O endereco de ptr eh: %p\n\n", &ptr);

    x = *ptr;

    printf("O conteudo de x eh: %d\n\n", x);

    //*ptr = 7; // erro: *ptr é const; não pode atribuir novo valor
    //ptr = &y; // erro: ptr é const; não pode atribuir novo endereço





    return 0;
}
