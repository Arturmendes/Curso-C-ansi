#include <stdio.h>

int main(void){

    int l, c , cont = 0;

    for(c=0; c<10; c++){
        for(l=0; l<10; l++){
            printf("*");
            if(cont == l){
                break;
            }
        }
        cont++;
        printf("\n");
    }

    printf("\n");
    printf("\n");



    cont = 0;
    for(c=10; c>0; c--){
        for(l=9; l>=0; l--){
            printf("*");
            if(cont == l){
                break;
            }
        }
        cont++;
        printf("\n");
    }

    printf("\n");
    printf("\n");

    cont = 0;
    for(c=0; c<10; c++){
        for(l=0; l<10; l++){

            if(cont > l){
                printf(" ");
            }else{
                printf("*");
            }
        }
        cont++;
        printf("\n");
    }


    printf("\n");
    printf("\n");



    cont = 0;
    for(c=10; c>0; c--){
        for(l=9; l>=0; l--){

            if(cont < l){
                printf(" ");
            }else{
                printf("*");

            }
        }
        cont++;
        printf("\n");
    }


}
