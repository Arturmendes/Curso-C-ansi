#include <stdio.h>

int main(void){

    int i, teste = 10;

    for(i = 1; i <= 256; i++){
        printf("Decimal = %.2d Hexadecimal = %.2x Octal = %.2o\n", i, i, i);
    }

    /*
    printf("%c", teste);
    printf("%c", teste);
    printf("%c", teste);
    printf("%c", teste);
    printf("%c", teste);
    */
}
