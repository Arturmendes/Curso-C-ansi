#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void embaralha( int wBaralho[][ 13 ]);
void distribui( const int wBaralho[][ 13 ], const char *wFace[], const char *wNaipe[] );
void mostraBaralho( const int wBaralho[][ 13 ]);

int main( void ){
    //Inicializa array naipe
    const char *naipe[ 4 ] = { "Copas", "Ouros", "Paus", "Espadas" };
    //Inicializa array face
    const char *face[ 13 ] = { "As", "Dois", "Tres", "Quatro", "cinco",
                                "Seis", "Sete", "Oito", "Nove", "Dez",
                                "Valete", "Dama", "Rei" };
    //Incializa array baralho
    int baralho[ 4 ][ 13 ] = { 0 };

    srand( time( 0 ) ); //Semente do gerador de numero aleatórios

    embaralha( baralho );
    mostraBaralho( baralho );
    //distribui( baralho, face, naipe );
    return 0;

}

void embaralha( int wBaralho[][ 13 ]){
    int linha;
    int coluna;
    int carta;

    for( carta = 1; carta <= 52; carta++ ){
        do{
            printf("Entrei no do while.\n");
            linha = rand() % 4;
            coluna = rand() % 13;
            printf("wBaralho[%d][%d] = %d\n", linha, coluna, wBaralho[linha][coluna]);
            //system("pause");

        }while( wBaralho[ linha ][ coluna ] != 0 );

        printf("Sai do while.\n");

        wBaralho[ linha ][ coluna ] = carta;

        printf("wBaralho[%d][%d] = %d\n\n", linha, coluna, wBaralho[linha][coluna]);
        //system("pause");
    }
}



void distribui( const int wBaralho[][ 13 ], const char *wFace[], const char *wNaipe[] ){
    int carta;
    int linha;
    int coluna;

    for( carta = 1; carta <= 52; carta++ ){

        for(linha = 0; linha <= 3; linha++ ){

            for(coluna = 0; coluna <= 12; coluna ++ ){

                if ( wBaralho[ linha ][ coluna ] == carta ){
                    printf(" %s de %s        %c", wFace[ coluna ], wNaipe[ linha ], carta % 2 == 0 ? '\n' : '\t' );
                }
            }
        }
    }
}

void mostraBaralho( const int wBaralho[][ 13 ]){
    int linha;
    int coluna;

    for(linha = 0; linha < 4; linha++){
        for(coluna = 0; coluna < 13; coluna++){
            printf("wBaralho[%d][%d] = %d\n", linha, coluna, wBaralho[linha][coluna]);
            if(linha == 0 && coluna == 12){
                printf("\n\n");
            }
            if(linha == 1 && coluna == 12){
                printf("\n\n");
            }
            if(linha == 2 && coluna == 12){
                printf("\n\n");
            }
            if(linha == 3 && coluna == 12){
                printf("\n\n");
            }
        }

    }

}
