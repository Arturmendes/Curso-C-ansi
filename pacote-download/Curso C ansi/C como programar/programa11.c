#include <stdio.h>
#include <math.h>

int square(int y);

int main(void){

    int x;

    for(x = 1; x <= 10; x++){
        printf( "%5d", square(x));
    }

    printf("\n");

    return 0;
}

int square(int y){
    return y * y;
}