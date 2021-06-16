//Divididos 7 resto 5;
#include <stdio.h>
#include <math.h>

void main() {
	int Contador, Numeros;

	for(Contador= 100; Contador < 1001; Contador++) {
		if((Contador % 7) == 5) {
		printf("Numero: %d||",Contador);
		}
	}
} 
