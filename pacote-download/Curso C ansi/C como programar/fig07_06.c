#include<stdio.h>

int cubeByValue( int n );

int main( void ){
    int number = 5;

    printf( "O valor original do número eh %d\n", number);

    number = cubeByValue( number );

    printf( " \nO novo valor do numero eh %d\n", number);
    return 0;
}


int cubeByValue( int n ){
    return n * n * n;
}
