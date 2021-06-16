//Tempo download;
#include <stdio.h>
#include <math.h>

int main () {
	float tamanhoArq, conexVel, tempoDw;
	
	printf("Informe o tamanho do arquivo\n");
	scanf("%f", &tamanhoArq);
	
	printf("Informe a velocidade de conexao\n");
	scanf("%f", &conexVel);
	
	tempoDw=tamanhoArq/conexVel;
	
	printf("O tempo necessario para download sera %.2f.\n",tempoDw);
	return 0;
}
