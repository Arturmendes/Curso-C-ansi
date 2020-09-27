#include<stdio.h>

#define SIZE 12

int main( void ){

    int s[SIZE] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
    int j;
    int total = 0;

    for(j = 0; j < SIZE; j++){
        total += s[j];
    }

     printf("Total de valores dos elementos do array eh %d\n", total);



    return 0;
}
