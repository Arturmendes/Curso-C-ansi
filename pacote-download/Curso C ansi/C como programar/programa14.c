#include <stdio.h>



int main(void){
    int numero = 6;
    int contador;
    int fatorial = 1;

    for(contador = numero; contador >= 1; contador--){
        fatorial *= contador;
    }

    printf("Fatorial de %d = %d", numero, fatorial);

    return 0;
}

