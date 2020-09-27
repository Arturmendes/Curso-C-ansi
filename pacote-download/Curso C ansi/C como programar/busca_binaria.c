#include <stdio.h>
#define TAM 30

int buscaBinaria(int array[], int chave, int inicio, int fim );

void imprimeArray(int array[], int inicio, int meio, int fim);

int main( void ){
    int i;
    int array[ TAM ];
    int chave = 15;
    int achado;


    for( i = 0; i < TAM; i++ ){
        //printf("i = %d", i);
        array[ i ] = i;
    }

    //printf("Array[ %d ] eh: %d\n\n", i - 1, array[i-1]);

    //printf("&Array[515] = %p\n\n", array[515]);
    //printf("&chave = %p\n\n", chave);

    achado = buscaBinaria(array, chave, 0, TAM - 1);

    if(achado == -1){
        printf("Elemento nao encontrado.\n\n");
    }else{
        printf("Elemento %d, esta na posicao do array[ %d ].", array[achado], achado);
    }
}



int buscaBinaria(int array[], int chave, int inicio, int fim ){
    int meio;



    while( inicio <= fim ){

        meio = (inicio + fim) / 2;
        printf("\n");
        imprimeArray(array, inicio, meio, fim);
        printf("\n");

        if(chave == array[meio]){
            return meio;
        }else if( chave < array[meio]){
            fim = meio -1;
        }else{
            inicio = meio + 1;
        }
    }

    return -1;
}

void imprimeArray(int array[], int inicio, int meio, int fim){

    int i;

    for( i = 0; i < TAM; i++ ){
        if( i < inicio || i > fim ){
            printf( "   " );
        }else if ( i == meio){
            printf("%3d", array[i]);
        }else{
            printf( "%3d", array[i]);
        }

    }

}
