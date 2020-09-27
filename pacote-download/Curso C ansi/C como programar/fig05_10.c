#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status { CONTINUE, WON, LOST };

int rollDice( void );



int main(void){

    int sum; // soma dos dados lançados
    int myPoint; // ponto ganho

    enum Status gameStatus; // pode conter CONTINUE, WON OU LOST

    srand( time( NULL ) );

    sum = rollDice();

    system("PAUSE");

    switch( sum ){

        /* vence na primeira jogada */
        case 7:
        case 11:
            gameStatus = WON;
            break;

        /* perde na primeira jogada */
        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;

        /* lembra ponto */
        default:
            gameStatus = CONTINUE;
            myPoint = sum;
            printf( "Ponto eh %d\n", myPoint );
            break;
    }

    while( gameStatus == CONTINUE){

        sum = rollDice(); /* joga dados novamente */

        /* determina status do jogo */
        if( sum == myPoint ){ /* vence fazendo ponto */
            gameStatus = WON; /* jogo termina, jogador vence */
        }else{
            if (sum == 7){ /* perde por lançar 7 */
                gameStatus = LOST; /* jogo termina, jogador perde */
            }
        }
        printf("GameStatus = %d\n", gameStatus);
        system("PAUSE");
    }

    if( gameStatus == WON ){ /* jogador venceu? */
            printf( "Jogador vence\n" );
    }else{
        printf( "Jogador perde\n" );
    }
    return 0;
}

int rollDice(){

    int die1; /* primeiro dado */
    int die2; /* segundo dado */
    int workSum; /* soma dos dados */

    die1 = 1 + (rand() % 6);
    die2 = 1 + (rand() % 6);
    workSum = die1 + die2;

    printf( "Jogador rolou %d + %d = %d\n", die1, die2, workSum );
    return workSum;



}
