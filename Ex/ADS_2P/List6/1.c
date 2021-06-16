//Memoria das variaveis;
#include<stdio.h>

void main() {
	int valor1 = 35,valor2 = 45;
	int *pv, *pv2;

	pv = &valor1;
	pv2 = &valor2;


	printf("Valor da primeira: %d  ,e endereço: %p \n", valor1,pv);
	printf("Valor da segunda: %d  ,e endereço: %p \n", valor2,pv2);

}
