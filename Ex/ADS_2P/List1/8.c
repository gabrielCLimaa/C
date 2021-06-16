//Volume esfera;
#include <stdio.h>
#include <math.h>

int main () {
	float raio, volume;
	
	const float PI=3.14159;
	
	printf("Informe o valor do raio da esfera\n");
	scanf("%f", &raio);
	
	volume= (0,75*PI)*(pow(raio,3));
	
	printf("O volume e de %.2f.\n",volume);
	return 0;
}
