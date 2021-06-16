//Comparação;
#include <stdio.h>

void main () {
	float Num1, Num2;
	
	printf("Informe um numero\n");
	scanf("%f", &Num1);
	
	printf("Informe um numero\n");
	scanf("%f", &Num2);
	
	if(Num1 == Num2) {
		printf("Iguais\n");
	} else if(Num1 > Num2) {
		printf("O primeiro valor e maior %.2f.\n",Num1);
	} else if(Num2 > Num1) {
		printf("O segundo valor e maior %.2f.\n",Num2);
	}

}	
	
