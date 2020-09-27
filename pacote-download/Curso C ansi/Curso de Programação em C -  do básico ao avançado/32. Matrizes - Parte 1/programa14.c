#include<stdio.h>

int main( void ){

    char nome[3][50];
    int i;

    for(i = 0; i < 3; i++){
        printf("Qual seu nome? ");
        gets(nome[i]);
    }

    for(i = 0; i < 3; i++){
        printf("Ola %s\n", nome[i]);
    }
    return 0;

}

