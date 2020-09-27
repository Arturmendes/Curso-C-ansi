#include <stdio.h>

long fibonacci( long n );

int main(void){
    long result;
    long number;
    long i;

    /*
    printf( "Digite um inteiro: ");
    scanf( "%ld", &number );

    result = fibonacci(number);

    printf("Fibonacci ( %ld ) = %ld\n", number, result);
    */


    for(i=0; i<=40; i++){
        result = fibonacci(i);
        printf("Fibonacci ( %ld ) = %ld\n", i, result);

    }


    return 0;
}

long fibonacci( long n ){
    if(n == 0 || n == 1){
        return n;
    }else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

}


