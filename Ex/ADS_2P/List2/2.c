//Condicionais;
#include <stdio.h>

void main () {
	float valor1, valor2, resultado;

	printf("Insira dois valores reais\n");
	scanf("%f" "%f" , &valor1,&valor2);
	
	resultado= valor1 + valor2;
	
	if(resultado >= 10) {
		resultado= resultado + 5;
		printf("O valor é, %.2f.\n",resultado);
	} else {
		resultado = resultado - 7;
		printf("O valor é, %.2f.\n",resultado);
	}
}	
	
