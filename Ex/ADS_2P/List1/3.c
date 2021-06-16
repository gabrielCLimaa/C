//IMC;
#include <stdio.h>
#include <math.h>

int main () {
	float peso, altura, IMC;
	
	printf("Informe a sua altura em metros\n");
	scanf("%f", &altura);
	
	printf("Informe o seu peso em quilogramas\n");
	scanf("%f", &peso);
	
	IMC= peso/pow(altura,2);
	
	printf("O seu IMC é %f.\n",IMC);
	return 0;
}
