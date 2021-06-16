//Produto origem;
#include <stdio.h>

void main () {
	float precoProduto;
	unsigned int codigoOrigem;

	printf("Informe o valor do produto\n");
	scanf("%f", &precoProduto);
	
	printf("Informe o codigo do produto\n");
	scanf("%u" , &codigoOrigem);
	
	switch (codigoOrigem) {
		case 1: printf("O valor do produto : %f, SUL", precoProduto);
		break;
		case 2: printf("O valor do produto : %f, NORTE",precoProduto);
		break;
		case 3: printf("O valor do produto : %f, LESTE",precoProduto);
		break;
		case 4: printf("O valor do produto : %f, OESTE",precoProduto);
		break;
	}
	
	if (codigoOrigem == 5 || codigoOrigem == 6) {printf("O valor do produto : %f, NORDESTE",precoProduto);}
	else if(codigoOrigem == 7 || codigoOrigem == 8 || codigoOrigem == 9) {printf("O valor do produto : %f,SUDESTE",precoProduto);} 
	else if(codigoOrigem >= 10 && codigoOrigem <= 20) {printf("O valor do produto : %f, CENTRO-OESTE",precoProduto);}
	  else if(codigoOrigem >= 25 && codigoOrigem <= 30) {printf("O valor do produto : %f, NOROESTE",precoProduto);}
	  else if(codigoOrigem < 1 || codigoOrigem > 30) {printf("O valor do produto : %f, IMPORTADO",precoProduto);}
}
