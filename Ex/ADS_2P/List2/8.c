//Tipo triangulo;
#include <stdio.h>

void main () {
	float ladoA, ladoB, ladoC, triangulo;

	printf("Informe tres valores\n");
	scanf("%f" "%f" "%f", &ladoA, &ladoB, &ladoC);
	
	if (ladoA < (ladoB + ladoC) && ladoB < (ladoA + ladoC) && ladoC < (ladoB + ladoA)) {
		triangulo=1;
	} else { printf("Os valores nao formam um triangulo\n"); }	
	if (triangulo == 1) {
		if(ladoA == ladoB && ladoB == ladoC) {
			printf("É um triangulo equilatero\n");
		} else if((ladoA == ladoB && ladoB != ladoC) || (ladoC == ladoB && ladoB != ladoA) || (ladoB == ladoC && ladoC != ladoA) ){
			printf("É um triangulo isoceles\n");
		} else if(ladoA != ladoB && ladoA != ladoC) {
			printf("É um triangulo escaleno\n");
		}
	}
}
