//Soma dos quadrados;
#include <stdio.h>
#include <math.h>

int main () {
	int A, B, C, resultado;
	
	printf("Informe um valor\n");
	scanf("%d", &A);
	
	printf("Informe um valor\n");
	scanf("%d", &B);
	
	printf("Informe um valor\n");
	scanf("%d", &C);
	
	resultado= pow(A,2)+pow(B,2)+pow(C,2);
	
	printf("O valor final sera %d.\n",resultado);
	return 0;
}
