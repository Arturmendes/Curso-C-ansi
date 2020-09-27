#include <stdio.h>

int main(void){
    double pi = 0;
    double k = 4;
    double num = 1;
    int i;

    for(i = 1; i < 1000; i++ ){
        if(!(i%2)){
            pi = pi - (k / num);
        }else{
            pi = pi + (k / num);
        }
        num = num + 2;
        if(!(i%100)){
            printf("PI com %d termo: %.4f.\n", i, pi);
            system("pause");
        }

        if(!(i%10)){

            system("cls");
        }
    }

    printf("\n\n%.2f\n\n",pi);

    return 0;




}
