#include <stdio.h>

int resto(int n1, int n2);

int main(void){
    int resultado,
        n1 = 29,
        n2 = 3;
    resultado = resto(n1, n2);



    printf("\no resto da divisao de %d e %d eh: %d\n", n1, n2, resultado);

}

int resto(int n1, int n2){

    int resultado;

    resultado = n1 / n2;
    resultado = n1 - n2 * resultado;
    return resultado;
}
