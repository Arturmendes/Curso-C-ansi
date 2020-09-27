#include <stdio.h>
#include <math.h>

int main(void){

    double valor; // Valor em depósito
    double principal = 1000.0; // Principal
    double taxa = 0.05; // taxa anual de juros
    int ano; // contador do ano

    printf("%4s%21s\n", "Ano", "Valor");

    for(ano = 1; ano <= 10; ano++){
        valor = principal * pow(1.0 + taxa, ano);
        printf("%4d%21.2f\n", ano, valor);
    }


    return 0;
}
