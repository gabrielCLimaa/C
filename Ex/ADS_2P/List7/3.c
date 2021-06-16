//Peso no planeta;
#include <stdio.h>
#include <math.h>

void main () {
	float peso;
	int planeta;
	
	printf("Informe o peso");
	scanf("%f",&peso);
	
	printf("Informe o planeta");
	scanf("%d", &planeta);
	
	if(planeta < 1 || planeta > 6) { printf("ERRO");}
	else if(planeta == 1 ) {peso= peso * 0.37; printf("Planeta mercurio e peso %.2f",peso); }
	else if(planeta == 2 ) {peso= peso * 0.88; printf("Planeta venus e peso %.2f",peso);}
	else if(planeta == 3 ) {peso= peso * 0.38; printf("Planeta marte e peso %.2f",peso);}
	else if(planeta == 4 ) {peso= peso * 2.64; printf("Planeta jupiter e peso %.2f",peso);}
	else if(planeta == 5 ) {peso= peso * 1,15; printf("Planeta saturno e peso %.2f",peso);}
	else if(planeta == 6 ) {peso= peso * 1,17; printf("Planeta urano e peso %.2f",peso);}


}
