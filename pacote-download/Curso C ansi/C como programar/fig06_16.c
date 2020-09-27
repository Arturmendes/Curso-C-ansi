#include <stdio.h>
#define SIZE 99

void mean(const int answer[]);
void median(int answer[]);
void mode(int freq[], const int answer[]);
void bubbleSort(int a[]);
void printArray(const int a[]);



int main( void ){

    int frequency[ 10 ] = { 0 };

    int response[ SIZE ] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
                            7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
                            6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
                            7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
                            6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
                            7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
                            5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
                            7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
                            7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
                            4, 5, 6, 1, 6, 5, 7, 8, 7};
    //mean( response );
    median( response );
    //mode( frequency, response );

    return 0;
}

void mean( const int answer[] ){

    int j;
    int total = 0;

    printf( "%s\n%s\n%s\n", "********", " Media", "********" );

    for(j = 0; j < SIZE; j++ ){
        total += answer[ j ];
    }

    printf( "A media eh o valor medio dos itens de dados.\n"
            "A media eh igual ao total de todos\n"
            "os itens de dados divididos pelo numero\n"
            "de itens de dados ( %d ). O valor medio para esta\n"
            "execucao eh: %d / %d = %.4f\n\n",
            SIZE, total, SIZE, ( double ) total / SIZE );

}

void median( int answer[] ){
    printf( "\n%s\n%s\n%s\n%s",
            "***********", " Mediana", "***********",
            "O array de respostas, nao ordenado, eh: ");
    printArray( answer );

    bubbleSort( answer );

    printf( "\n\nO array ordenado eh:");

    printArray( answer );

    printf( "\n\nA mediana eh o elemento %d do\n"
            "array ordenado de %d elementos.\n"
            "Para essa execucao, a mediana eh %d\n\n",
            SIZE / 2, SIZE, answer[SIZE / 2] );

}

void mode(int freq[], const int answer[]){
    int rating;
    int j;
    int h;
    int largest = 0;
    int modeValue = 0;

    printf( "\n%s\n%s\n%s\n", "********", " Moda", "********" );

    for(rating = 1; rating <= 9; rating++ ){
        freq[ rating ] = 0;
    }

    for(j = 0; j < SIZE; j++ ){
        ++freq[ answer[ j ] ];
    }

    printf( "%s%15s%19s\n\n",
            "Resposta", "Frequencia", "Histograma");

    for(rating = 1; rating <= 9; rating++){
        printf( "%8d%11d              ", rating, freq[ rating ]);

        if(freq[rating] > largest){
            largest = freq[ rating ];
            modeValue = rating;
        }

        for( h= 1; h <= freq[ rating ]; h++ ){
            printf( "*" );
        }

        printf( "\n" );
    }
    printf( "A moda eh o valor mais frequente.\n"
            "Para essa execucao, a moda eh %d, que ocorreu "
            "%d vezes.\n", modeValue, largest);

}



void bubbleSort(int a[]){
    int pass;
    int i;
    int hold;


    for(pass = 1; pass < SIZE; pass++ ){



        for( i = 0; i < SIZE - 1; i++ ){
            if(a[ i ] > a[ i + 1 ]){
                hold = a [ i ];
                a[ i ] = a[ i + 1 ];
                a[ i + 1 ] = hold;
            }
        }
    }
}



void printArray(const int a[]){

    int j;

    for(j = 0; j < SIZE; j++ ){
        if(j % 10 == 0){
            printf( "\n" );
        }
        printf( "%2d", a[ j ] );
    }

}




