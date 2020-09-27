#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

    int num;
    int escolhido;
    char opc;

    srand(time( NULL ));

    num = rand() % 1000;



    printf("Escolhido = %d e num = %d\n", escolhido, num);

    do{

        printf("Escolha um numero de 1 ate 1000: ");
        scanf("%d", &escolhido);

        if(escolhido < num){
            printf("Muito baixo. Tente novamente.\n");
        }
        if(escolhido > num){
            printf("Muito alto. Tente novamente.\n");
        }
        if(escolhido == num){
            printf("Excelente! Voce descobriu o numero!");
            printf("Gostaria de Jogar novamente (s ou n)?\n");
            fflush(stdin);
            scanf("%c", &opc);
            if(opc == 's'){
                printf("entrei no if");
                num = rand() % 1000;
            }
            if(opc == 'n'){
                printf("entrei no else");
                break;
            }
        }



    }while(escolhido != num);







    return 0;
}
