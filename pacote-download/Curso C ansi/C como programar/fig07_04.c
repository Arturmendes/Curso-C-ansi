#include <stdio.h>

int main( void ){
    int a;
    int *aPtr;

    a = 7;
    aPtr = &a;

    printf("O endereco de a eh %p\nO valor de aPtr eh %p", &a, aPtr);

    printf("\n\nO valor de a eh %d\nO valor de *aPtr eh %d", a, *aPtr);

    printf("\n\nMostrando que * e & sao complementos um do outro\n&*aPtr = %p\n*&aPtr = %p\n", &*aPtr, *&aPtr);

    return 0;
}
