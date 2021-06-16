//Media, quantidade de valores;
#include <stdio.h>

void main () {
	float Numeros, Contador = 0, Media, Positivo = 0, Negativo = 0, Soma = 0;

	while(Contador < 10 ) {
		printf("Informe um numero\n");
		scanf("%f", &Numeros);
		
		if(Numeros < 0) { Negativo+=1;} 
		else if(Numeros > 0) {Positivo+=1;}
		Soma= Soma + Numeros;
		Contador+=1;
		}
		
	Media= (Soma/10);
	Positivo= Positivo * 10;
	Negativo= Negativo * 10;
	
	printf("Percentual positivo e negativo,%.2f,%.2f,\n",Positivo,Negativo);
	printf("A media é de : %.2f\n",Media);
}
