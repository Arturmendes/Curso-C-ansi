#include <stdio.h>

long fatorial(long number);

int main(void){
    long num = 0;

    printf("%2d! = %ld\n", num, fatorial(num));

    return 0;
}

long fatorial(long number){
    if(number <= 1 ){
        return 1;
    }else{
        return (number * fatorial( number -1));
    }

}


