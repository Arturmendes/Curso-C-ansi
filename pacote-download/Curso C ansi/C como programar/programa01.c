#include <stdio.h>


int main( void )
{
    int d1, d2, d3, d4, d5;
    int num1 = 0;

    printf("Entre com um numero de 5 digitos: ");
    scanf("%d", &num1);

    d1 = num1 / 10000;
    num1 = num1%10000;

    d2 = num1 / 1000;
    num1 = num1%1000;

    d3 = num1 / 100;
    num1 = num1%100;

    d4 = num1 / 10;
    num1 = num1%10;

    d5 = num1;




    printf("%d %3d %3d %3d %3d\n", d1, d2, d3, d4, d5);

    return 0;
}
