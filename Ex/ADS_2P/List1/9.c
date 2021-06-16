//Velocidade projetil;
#include <stdio.h>
#include <math.h>

int main () {
	float velocidade, distancia, tempo;
	
	printf("Informe a distancia em km\n");
	scanf("%f", &distancia);
	
	printf("Informe o tempo em min\n");
	scanf("%f", &tempo);
	
	velocidade= (distancia*1000)/(tempo*60);
	
	printf("A velocidade será de %.2f.\n",velocidade);
	return 0;
}
