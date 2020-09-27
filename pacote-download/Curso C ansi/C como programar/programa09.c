#include <stdio.h>


int main( void ){
    int contador = 1;
    do{
        printf("Contador = %d\n", contador);
        printf("%d\n", contador);
    }while(contador++ < 10);
    //printf("Contador = %d\n", contador);

    return 0;
}

