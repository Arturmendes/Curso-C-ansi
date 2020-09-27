#include <stdio.h>

void main(void){

    int n1 = 5;
    int n2 = -5000;
    int n3 = 25;
    int n4 = 500000;
    int n5 = -1;

    int maior = 0;
    int menor = 0;


    if(maior < n1){
        maior = n1;
    }
    if(maior < n2){
        maior = n2;
    }
    if(maior < n3){
        maior = n3;
    }
    if(maior < n4){
        maior = n4;
    }
    if(maior < n5){
        maior = n5;
    }

    menor = maior;

    if(menor > n1){
        menor = n1;
    }
    if(menor > n2){
        menor = n2;
    }
    if(menor > n3){
        menor = n3;
    }
    if(menor > n4){
        menor = n4;
    }
    if(menor > n5){
        menor = n5;
    }


    printf("O maior numero eh: %d\n", maior);
    printf("O menor numero eh: %d\n", menor);




}
