#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int menu();
void exercicio01();
void exercicio02();
void exercicio03();
void exercicio04();
void exercicio05();
void exercicio06();
void exercicio07();
void exercicio08();
void exercicio09();
void exercicio10();
void exercicio11();
void exercicio12();
void exercicio13();
void exercicio14();
void exercicio15();
void exercicio16();
void exercicio17();
void exercicio18();
void exercicio19();
void exercicio20();
void exercicio21();
void exercicio22();
void exercicio23();
void exercicio24();
void exercicio25();
void exercicio26();
void exercicio27();
void exercicio28();
void exercicio29();
void exercicio30();
void exercicio31();
void exercicio32();
void exercicio33();
void exercicio34();
void exercicio35();
void exercicio36();
void exercicio37();
void exercicio38();
void exercicio39();
void exercicio40();
void exercicio41();
void exercicio42();
void exercicio43();
void exercicio44();
void exercicio45();
void exercicio46();
void exercicio47();
void exercicio48();
void exercicio49();
void exercicio50();
void exercicio51();
void exercicio52();
void exercicio53();






int main(int argc, char *argv[]) {
	
	menu();	
	
	return 0;
}

int menu(){
	
	int opc = 0, i=0;
	do{
		system("cls");
		printf("Escolha o exercicio: ");
		for(i=1;i<27;i++){
			if(i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8 || i == 9){
				printf("\n  %d - Exercicio 0%d						%d - Exercicio %d", i, i, i+27, i+27);				
			}else{
				printf("\n %d - Exercicio %d						%d - Exercicio %d", i, i, i+27, i+27);
				
			}			
		}
		printf("\n 27 - Exercicio 27						 0 - SAIR\n");
		
		
		
		scanf("\n%d", &opc);
		
		switch(opc){
			case 1:
				exercicio01();
				break;
			case 2:
				exercicio02();
				break;
			case 3:
				exercicio03();
				break;
			case 4:
				exercicio04();
				break;
			case 5:
				exercicio05();
				break;
			case 6:
				exercicio06();
				break;
			case 7:
				exercicio07();
				break;
			case 8:
				exercicio08();
				break;
			case 9:
				exercicio09();
				break;
			case 10:
				exercicio10();
				break;
			case 11:
				exercicio11();
				break;
			case 12:
				exercicio12();
				break;
			case 13:
				exercicio13();
				break;
			case 14:
				exercicio14();
				break;
			case 15:
				exercicio15();
				break;
			case 16:
				exercicio16();
				break;
			case 17:
				exercicio17();
				break;
			case 18:
				exercicio18();
				break;
			case 19:
				exercicio19();
				break;
			case 20:
				exercicio20();
				break;
			case 21:
				exercicio21();
				break;
			case 22:
				exercicio22();
				break;
			case 23:
				exercicio23();
				break;			
			case 24:
				exercicio24();
				break;			
			case 25:
				exercicio25();
				break;			
			case 26:
				exercicio26();
				break;			
			case 27:
				exercicio27();
				break;			
			case 28:
				exercicio28();
				break;			
			case 29:
				exercicio29();
				break;			
			case 30:
				exercicio30();
				break;			
			case 31:
				exercicio31();
				break;			
			case 32:
				exercicio32();
				break;			
			case 33:
				exercicio33();
				break;			
			case 34:
				exercicio34();
				break;			
			case 35:
				exercicio35();
				break;			
			case 36:
				exercicio36();
				break;			
			case 37:
				exercicio37();
				break;			
			case 38:
				exercicio38();
				break;			
			case 39:
				exercicio39();
				break;			
			case 40:
				exercicio40();
				break;			
			case 41:
				exercicio41();
				break;			
			case 42:
				exercicio42();
				break;			
			case 43:
				exercicio43();
				break;			
			case 44:
				exercicio44();
				break;			
			case 45:
				exercicio45();
				break;			
			case 46:
				exercicio46();
				break;			
			case 47:
				exercicio47();
				break;			
			case 48:
				exercicio48();
				break;			
			case 49:
				exercicio49();
				break;			
			case 50:
				exercicio50();
				break;			
			case 51:
				exercicio51();
				break;			
			case 52:
				exercicio52();
				break;			
			case 53:
				exercicio53();
				break;
			case 0:
				break;
			
			default:
				printf("Digite uma opcao valida!\n");
				system("pause");
			
		}
		
		
		
		
	}while(opc != 0);
	
	return 0;	
}

void exercicio01(){
	int num;
	system("cls");
	printf("Exercicio 01\n");
	printf("Digite um numero: \n");
	scanf("%d", &num);
	system("cls");
	printf("O numero digitado foi: %d\n\n", num);
	
	system("pause");
	
}
void exercicio02(){
	float num;
	system("cls");
	printf("Exercicio 02\n");
	printf("Digite um numero: \n");
	scanf("%f", &num);
	system("cls");
	printf("O numero digitado foi: %.1f\n\n", num);
	
	system("pause");
	
}
void exercicio03(){
	int num1, num2, num3;
	system("cls");
	printf("Exercicio 03\n");
	printf("Digite o primeiro numero: \n");
	scanf("%d", &num1);
	printf("Digite o segundo numero: \n");
	scanf("%d", &num2);
	printf("Digite o terceiro numero: \n");
	scanf("%d", &num3);
	system("cls");
	printf("%d + %d + %d = %d \n", num1, num2, num3, num1+num2+num3);
	
	system("pause");
	
	
}
void exercicio04(){
	float num;
	system("cls");
	printf("Exercicio 04\n");
	printf("Digite um numero: \n");
	scanf("%f", &num);
	system("cls");
	printf("%.1f ao quadrado = %.1f\n", num, num*num);
	
	system("pause");
	
}
void exercicio05(){
	
	float num;
	system("cls");
	printf("Exercicio 05\n");
	printf("Digite um numero: \n");
	scanf("%f", &num);
	system("cls");
	printf("%.1f eh a quinta parte de: %.1f\n", num/5, num);
	
	system("pause");
	
}
void exercicio06(){
	
	float tempC;
	system("cls");
	printf("Exercicio 06\n");
	printf("Digite a temperatura em graus Celsius: \n");
	scanf("%f", &tempC);
	system("cls");
	printf("A temperatura %.1f em Fahrenheit: %.1f\n", tempC, tempC * (9.0 / 5.0) + 32.0);
	
	system("pause");
	
	
}
void exercicio07(){
	
	float tempF;
	system("cls");
	printf("Exercicio 07\n");
	printf("Digite a temperatura em graus Fahrenheit: \n");
	scanf("%f", &tempF);
	system("cls");
	printf("A temperatura %.1f em Celsius: %.1f\n", tempF, 5.0 * (tempF - 32.0) / 9);
	
	system("pause");
	
}
void exercicio08(){
	
	float tempK;
	system("cls");
	printf("Exercicio 08\n");
	printf("Digite a temperatura em graus Kelvin : \n");
	scanf("%f", &tempK);
	system("cls");
	printf("A temperatura %.2f em Celsius: %.2f\n", tempK, tempK - 273.15);
	
	system("pause");
	
}
void exercicio09(){
	
	float tempC;
	system("cls");
	printf("Exercicio 09\n");
	printf("Digite a temperatura em graus Celsius: \n");
	scanf("%f", &tempC);
	system("cls");
	printf("A temperatura %.2f em Kelvin: %.2f\n", tempC, tempC + 273.15);
	
	system("pause");
	
}
void exercicio10(){
	
	float velK;
	system("cls");
	printf("Exercicio 10\n");
	printf("Digite a velocidade em km/h: \n");
	scanf("%f", &velK);
	system("cls");
	printf("A velocidade %.2f km/h em m/s: %.2f\n", velK, velK/3.6);
	
	system("pause");
	
	
	
}
void exercicio11(){
	float velM;
	system("cls");
	printf("Exercicio 11\n");
	printf("Digite a velocidade em m/s: \n");
	scanf("%f", &velM);
	system("cls");
	printf("A velocidade %.2f m/s em km/h: %.2f\n", velM, velM*3.6);
	
	system("pause");
}
void exercicio12(){
	
	
}
void exercicio13(){
}
void exercicio14(){
}
void exercicio15(){
}
void exercicio16(){
}
void exercicio17(){
}
void exercicio18(){
}
void exercicio19(){
}
void exercicio20(){
}
void exercicio21(){
}
void exercicio22(){
}
void exercicio23(){
}
void exercicio24(){
}
void exercicio25(){
}
void exercicio26(){
}
void exercicio27(){
}
void exercicio28(){
}
void exercicio29(){
}
void exercicio30(){
}
void exercicio31(){
	system("cls");
	
	int num;
	
	printf("Exercicio 31\n");
	printf("Digite um numero: ");
	scanf("%d", &num);
	printf("Seu antecessor: %d\n", num-1);
	printf("Seu sucessor: %d\n", num+1);	
	printf("\n");	
	system("pause");
}
void exercicio32(){
	system("cls");
	
	int num, dobroAntecessor, triploSucessor;
	
	
	printf("Exercicio 32\n");
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	dobroAntecessor = (num*2)-1;
	triploSucessor = (num*3)+1;	
	
	printf("A soma do sucessor (%d) de seu triplo (%d) com o antecessor (%d) de seu dobro (%d): %d\n", triploSucessor, num*3, dobroAntecessor, num*2, triploSucessor + dobroAntecessor);
	printf("\n");	
	system("pause");
}
void exercicio33(){
}
void exercicio34(){
}
void exercicio35(){
}
void exercicio36(){
}
void exercicio37(){
	system("cls");
	
	float valor;
	
	printf("Exercicio 37\n");
	printf("Digite o valor do produto: ");
	scanf("%f", &valor);
	printf("Valor com 12%% de desconto: %.2f\n", valor-(valor*12/100));	
	printf("\n");	
	system("pause");
	
}
void exercicio38(){
	system("cls");
	
	float salario;
	
	printf("Exercicio 38\n");
	printf("Digite o valor do salario: ");
	scanf("%f", &salario);
	printf("Valor com 25%% de aumento: %.2f\n", salario+(salario*25/100));	
	printf("\n");	
	system("pause");
	
}
void exercicio39(){
	system("cls");
	
	float premio=780000;
	
	printf("Exercicio 39\n");
	printf("Valor total do premio: %.2f\n", premio);
	printf("Primeiro ganhador recebera 46%%: %.2f\n", premio-(premio*54/100));
	printf("Segundo ganhador recebera 32%%: %.2f\n", premio-(premio*68/100));
	printf("Terceiro ganhador recebera 22%%: %.2f\n", premio-(premio*78/100));	
	printf("\n");	
	system("pause");
}
void exercicio40(){
}
void exercicio41(){
}
void exercicio42(){
}
void exercicio43(){
}
void exercicio44(){
}
void exercicio45(){
}
void exercicio46(){
	system("cls");
	
	int num;
	printf("Exercicio 46\n");
	printf("Digite um numero de 3 digitos(de 100 a 999).\n");
	scanf("%d", &num);
	while(num>0){
		printf("%d", num%10);
		num=num/10;
	}
	printf("\n");
	
	
	
	
	system("pause");
}
void exercicio47(){
	system("cls");
	
	int num,n[4],i=3;
	printf("Exercicio 47\n");
	printf("Digite um numero de 4 digitos(de 1000 a 9999).\n");
	scanf("%d", &num);
	while(num>0){
		n[i]=num%10;
		num=num/10;
		i--;
	}
	for(i=0;i<4;i++){
		printf("%d\n", n[i]);
	}
	
	
	
	
	system("pause");	
}
void exercicio48(){
}
void exercicio49(){
}
void exercicio50(){
	int idade, idadeAtual, anoAtual;
	char opc;
	system("cls");
	printf("Exercicio 50\n");
	printf("Digite a idade que voce tem?\n");
	scanf("%d", &idadeAtual);
	idade = idadeAtual;
	inicio:
	printf("Voce ja fez aniversario esse ano? S - sim ou N - nao\n");
	fflush(stdin);
	scanf("%c", &opc);
	if(opc == 'S' || opc == 's'){
		idadeAtual = idadeAtual;
	}else if(opc == 'N' || opc == 'n'){
		idade = idade+1;
	}else{
		printf("Digite uma opcao valida!");
		system("pause");
		goto inicio;
	}
	
	printf("Digite o ano atual?\n");
	scanf("%d", &anoAtual);

	system("cls");
	printf("Voce nasceu em %d, e sua idade eh de %d.\n", anoAtual-idade, idadeAtual);
	
	system("pause");
}
void exercicio51(){
}
void exercicio52(){
}
void exercicio53(){
}

















