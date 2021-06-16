//Juros;
#include <stdio.h>
#include <math.h>

int main () {
	float capital, taxa, periodo, montante;
	
	printf("Informe o capital inicial\n");
	scanf("%f", &capital);
	
	printf("Informe a taxa de juros mensal\n");
	scanf("%f", &taxa);
	
	printf("Informe o tempo da aplicacao\n");
	scanf("%f", &periodo);
	
	montante= pow((1+(taxa/100)),periodo)*capital;
	
	printf("O valor final sera de %.2freais.\n",montante);
	return 0;
}
