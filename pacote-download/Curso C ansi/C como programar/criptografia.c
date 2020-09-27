#include <stdio.h>

int main(void){
    int num, copia;
    int d1, d2, d3, d4, dAuxiliar;


    printf("Entre com o numero a ser condificado (4 digitos): ");
    scanf("%d", &num);

    copia = num;

    d1 = copia / 1000;
    copia = copia % 1000;
    d2 = copia / 100;
    copia = copia % 100;
    d3 = copia / 10;
    d4 = copia % 10;

    printf("%d%3d%3d%3d\nOriginal: %d\n", d1, d2, d3, d4, num);

    copia = (d1 *1000) + (d2 * 100) + (d3 *10) + (d4 * 1);

    //printf("%d\n", copia);

    // Codificação:

    //Somar 7 em cada digito:
    d1 = d1 + 7;
    d2 = d2 + 7;
    d3 = d3 + 7;
    d4 += 7;

    //Calcular o modulo, depois que dividir por 10 cada digito.

    d1 = d1 % 10;
    d2 = d2 % 10;
    d3 = d3 % 10;
    d4 %= 10;

    printf("%d%3d%3d%3d???\nOriginal: %d\n", d1, d2, d3, d4, num);

    // inverter d1 com d3 e d2 com d4

    dAuxiliar = d1;
    d1 = d3;
    d3 = dAuxiliar;

    dAuxiliar = d2;
    d2 = d4;
    d4 = dAuxiliar;

    copia = (d1 *1000) + (d2 * 100) + (d3 *10) + (d4 * 1);

    printf("%d%3d%3d%3d\nOriginal: %d\nCodificado: %d\n", d1, d2, d3, d4, num, copia);

    system("pause");
    system("cls");

    num = copia;

    printf("Numero a ser decodificado (4 digitos): %d\n", num);

    d1 = copia / 1000;
    copia = copia % 1000;
    d2 = copia / 100;
    copia = copia % 100;
    d3 = copia / 10;
    d4 = copia % 10;

    printf("%d%3d%3d%3d\nOriginal: %d\n", d1, d2, d3, d4, num);

    copia = (d1 *1000) + (d2 * 100) + (d3 *10) + (d4 * 1);

    //decodificação

    // inverter d1 com d3 e d2 com d4

    dAuxiliar = d1;
    d1 = d3;
    d3 = dAuxiliar;

    dAuxiliar = d2;
    d2 = d4;
    d4 = dAuxiliar;

    //somar 10 a cada digito
    if(d1 == 7 || d1 == 8 || d1 == 9){
        d1 = d1;
    }else{
        d1 = d1 + 10;
    }

    if(d2 == 7 || d2 == 8 || d2 == 9){
        d2 = d2;
    }else{
        d2 = d2 + 10;
    }

    if(d3 == 7 || d3 == 8 || d3 == 9){
        d3 = d3;
    }else{
        d3 = d3 + 10;
    }

    if(d4 == 7 || d4 == 8 || d4 == 9){
        d4 = d4;
    }else{
        d4 = d4 + 10;
    }

    printf("%d%3d%3d%3d\nOriginal: %d\n", d1, d2, d3, d4, num);

    //diminur 7 de cada digito

    d1 = d1 - 7;
    d2 = d2 - 7;
    d3 = d3 - 7;
    d4 -= 7;

    copia = (d1 *1000) + (d2 * 100) + (d3 *10) + (d4 * 1);

    printf("%d%3d%3d%3d\nOriginal: %d\nDecodificado: %d\n", d1, d2, d3, d4, num, copia);


























}
