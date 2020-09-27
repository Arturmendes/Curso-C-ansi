#include <stdio.h>
#include <stdlib.h>

float raiz(float x);
float absF(float x);


int main(void) {
 float n;

 printf("\n\nForneça um numero que deseja calcular a raiz quadrada: "   );
 scanf("%f",&n);
 printf("\n\nA raiz quadrada de %.5f é %.12f\n\n",n,raiz(n));
 return(0);
}


/* Calcula a Raiz Quadrada */
float raiz(float x) {
 float r = 1.00; /* Chute inicial */
 float rp, res;
 int sair = 0;

 while(!sair) {
 		printf("Valores quando entra no while\n");
        res = r + ((x - (r*r)) / (2*r));
        printf("Res = %f.\n", res);
        system("pause");

        /* Checa resultado */
        rp = res * res;
        printf("rp = %f.\n", rp);
        system("pause");
        
        if( (float)(rp-x) == 0 || absF(rp-x) < 0.0000000000000001 || r == res) {
        	printf("Entrei no if\n");
        	printf("Valo de rp= %f, valor de x= %f, valor de r= %f, valor de res= %f.\n", rp, x, r, res);
        	system("pause");
                sair = 1;
        } else {
        		printf("Entrei no else\n");
        		printf("Valor de rp= %f, valor de x= %f, valor de r= %f, valor de res= %f.\n", rp, x, r, res);
        		system("pause");
                r = res;
                printf("Saindo do else\n");
        		printf("Valor de rp= %f, valor de x= %f, valor de r= %f, valor de res= %f.\n", rp, x, r, res);
        		system("pause");
        }
 }
 return(res);
}

/* Calcula Valor absoluto para tipo float */
float absF(float x) {
        if(x < 0)
                return(-1*x);
        else
                return(x);
}


