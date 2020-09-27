#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int var = 10;
	int *point1   = &var;
	int **point2  = &point1;
	int ***point3 = &point2;
	
	printf("O valor de var = %d\n", ***point3);
	
	***point3 = 20;
	
	printf("O valor de var = %d\n", var);
	return 0;
}
