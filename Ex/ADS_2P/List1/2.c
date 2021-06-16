//Preço de custo;
#include <stdio.h>
#include <math.h>

int main () {
	float largura, comprimento, precoMetro, custoTotal;
	
	printf("Informe a largura\n");
	scanf("%f", &largura);
	
	printf("Informe o comprimento\n");
	scanf("%f", &comprimento);
	
	printf("Informe o custo por metro do carpete\n");
	scanf("%f", &precoMetro);
	
	custoTotal=(largura*comprimento)*precoMetro;
	
	printf("O custo da obra sera de %.2f reais.\n ",custoTotal);
	return 0;
}
