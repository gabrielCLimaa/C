//Gasto médio;
#include <stdio.h>
#include <math.h>

int main () {
	float consumoMedio,totalCombustivel,DistanciaP;
	
	printf("Informe a distancia percorrida\n");
	scanf("%f", &DistanciaP);
	
	printf("Informe a quantidade de combustivel gasto\n");
	scanf("%f", &totalCombustivel);
	
	consumoMedio= DistanciaP/totalCombustivel;
	
	printf("O consumo medio do veiculo e %f Km/l\n",consumoMedio);
	return 0;
}
