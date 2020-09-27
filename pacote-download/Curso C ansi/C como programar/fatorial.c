#include <stdio.h>
int main(void){
    int fat = 1, num = 16;
    while(num){
            fat = num * fat;
            num--;
    }
    printf("Fatorial calculado = %d", fat);
}
