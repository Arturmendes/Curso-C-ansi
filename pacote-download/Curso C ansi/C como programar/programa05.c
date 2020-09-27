#include <stdio.h>

void main(void){
    int contador;
    int nota;
    int total;

    float media;

    total = 0;
    contador =0;

    printf("Digite a nota, -1 para finalizar: ");
    scanf("%d", &nota);

    while(nota != -1){
        total = total + nota;
        contador += 1;

        printf("Digite a nota, -1 para finalizar: ");
        scanf("%d", &nota);
    }

    if(contador != 0){
        media = (float) total / contador;
        printf("Media da turma é %.2f\n", media);
    }else{
        printf("Nenhuma nota foi informada\n");
    }
}
