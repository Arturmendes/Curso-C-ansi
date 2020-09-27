#include <stdio.h>

void main(void){

    float peso_em_quilos = 62.15;
    float altura_em_metros = 1.58;
    float imc;

    imc = peso_em_quilos / (altura_em_metros * altura_em_metros);


    printf("Seu IMC eh: %.2f\n\n", imc);

    if (imc < 18.5){
        printf("Voce esta abaixo do peso!\n\n");
    }else if(imc >= 18.5 && imc <= 24.9){
        printf("Voce esta com peso normal!\n\n");
    }else if(imc > 24.9 && imc <= 29.9){
        printf("Voce esta acima do peso!\n\n");
    }else{
        printf("Voce esta obeso!\n\n");
    }

    printf("****************************************\n"
           "*       Valores de IMC                 *\n"
           "* Abaixo do peso: menor que 18,5       *\n"
           "* Normal:         entre 18,5 e 24,9    *\n"
           "* Acima do peso:  entre 25 e 29,9      *\n"
           "* Obeso:          30 ou  mais          *\n"
           "****************************************\n\n");




}
