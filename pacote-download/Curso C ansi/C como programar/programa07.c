#include <stdio.h>

int main(void){
    int i;

    for(i=0; i<1000; i++){
        if(i%100 == 0){
            printf("\n");
        }else{
            printf("*");
        }
    }

    return 0;



}
