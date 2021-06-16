//Remedio;
#include <stdio.h>
#include <math.h>

void main () {
	float idade, peso, gotas;
	
	printf("Informe a sua idade");
	scanf("%f", &idade);
	
	printf("Informe o seu peso em quilos");
	scanf("%f", &peso);
	
	gotas= 20;

	if(idade >= 12 && peso >= 60) {gotas= gotas * 2;printf("Voce devera tomar %.2f, gotas.\n",gotas);}
	else if( idade>= 12 && peso < 60) {gotas= gotas + 15; printf("Voce devera tomar %.2f, gotas.\n,",gotas);}
	else if( idade < 12 && peso >= 5 && peso <=9) {gotas= gotas - 15;printf("Voce devera tomar %.2f, gotas.\n,",gotas); }
	else if( idade < 12 && peso >= 9.1 && peso <=16) {gotas= gotas - 10;printf("Voce devera tomar %.2f, gotas.\n,",gotas);}
	else if( idade < 12 && peso >= 16.1 && peso <=24) {gotas= gotas - 5;printf("Voce devera tomar %.2f, gotas.\n,",gotas); }
	else if( idade < 12 && peso >= 24.1 && peso <=30) {gotas= gotas;printf("Voce devera tomar %.2f, gotas.\n,",gotas);}
	else if( idade < 12 && peso > 30) {gotas= gotas + 10;printf("Voce devera tomar %.2f, gotas.\n,",gotas); }






}
