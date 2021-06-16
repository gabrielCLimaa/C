//IMC2;
#include <stdio.h>
#include <math.h>

void main () {
	float peso, altura, IMC;
	
	printf("Informe a sua altura em metros\n");
	scanf("%f", &altura);
	
	printf("Informe o seu peso em quilogramas\n");
	scanf("%f", &peso);
	
	IMC= peso/pow(altura,2);
	
	if (IMC < 18.5) {
		printf("Abaixo do peso\n");
	} else if(IMC >= 18.5 && IMC < 25) {
		printf("Peso normal\n");
	} else if(IMC >= 25 && IMC < 30) {
		printf("Acima do peso\n");
	} else if(IMC >= 30) {
		printf("Obeso\n");
	}
}
