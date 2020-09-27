#include <stdio.h>

void main(void){
    int aprovados = 0;
    int reprovados = 0;
    int aluno = 1;
    int resultado;

    inicio:
    while(aluno <= 10){
        printf("Forneca resultado (1=aprovado, 2=reprovado):");
        scanf("%d", &resultado);

        if(resultado == 1){
            aprovados += 1;
        }
        else if(resultado == 2){
            reprovados += 1;
        }
        else{
            printf("opcao invalida.\n\n");
            goto inicio;
        }

        aluno += 1;

    }

    printf("Aprovados %d\n", aprovados);
    printf("Reprovados %d\n", reprovados);

    if (aprovados > 8){
        printf("Bonus ao instrudor!\n");
    }



}
