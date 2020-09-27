#include<stdio.h>
#define L1 2
#define C1 2

#define L2 2
#define C2 2

int main( void ){
    int numeros[L1][C1];
    int l, c;
    float valores[L2][C2];

    numeros[0][0] = 1;
    numeros[0][1] = 2;
    numeros[1][0] = 3;
    numeros[1][1] = 4;

    for(l = 0; l < L1; l++){
        for(c = 0; c < C1; c++){
            printf("numeros[%d][%d]: %2d ", l, c, numeros[l][c]);
        }
        printf("\n");
    }


    return 0;
}
