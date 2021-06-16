// Distancia entre pontos plano cartesiano;
#include <stdio.h>
#include <math.h>

int main () {
	float x1, y1, x2, y2, a, b, c;
	
	printf("Informe as cordenadas de P1\n");
	scanf("%f" "%f", &x1, &y1);
	
	printf("Informe as cordenadas de P2\n");
	scanf("%f" "%f", &x2, &y2);
	
	a= x2 - x1;
	b= y2 - y1;
	c= sqrt(pow(a,2)+ pow(b,2));
	
	printf("A distancia sera de %.2f.\n",c);
	return 0;
}
