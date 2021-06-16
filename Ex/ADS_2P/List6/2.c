//Ponteiro;
#include<stdio.h>

void soma(int A, int B) {
	int *R;
	R = &A;
		*R = A + B;
		
	printf("Valor de A: %d \n", A);
	printf("Valor de B: %d \n", B);

}

void main() {
	int A,B;

	puts("Informe o valor de A");
	scanf("%d",&A);
	
	puts("Informe o valor de B");
	scanf("%d",&B);

	soma(A,B);

}
