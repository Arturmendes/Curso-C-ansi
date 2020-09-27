#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int mat[10] = {1,2,3,4,5,6,7,8,9,10};
	int *point, i;
	
	point = mat;
	
	for(i=0; i<10; i++){
		printf ("%d\n", *(point+i));
		
	}
	
	printf("%d", mat[9]);
	
	
	
	return 0;
}
