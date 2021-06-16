//Soma matriz;
#include <stdio.h>

int matrizA[5];
int matrizB[5];
int matrizR[5];
int tamanho;

int popularM(int T)
{
	int contador;

	for(contador = 0;contador <= T;contador++) {
		printf("Informe o valor %d da matriz 1\n", contador); 
		scanf("%d", &matrizA[contador]);
	}

	for(contador = 0;contador <= T;contador++) {
		printf("Informe o valor %d da matriz 2\n", contador); 
		scanf("%d", &matrizB[contador]);
	}
}

int calcular(int T) 
{

	int contador;

	for(contador = 0; contador <= T;contador++) {
		matrizR[contador] = matrizA[contador] + (matrizB[contador]);
	}
}

int resultado(int T)
{
	int contador;

	for(contador = 0;contador <= T;contador++) {
		printf( "%d",matrizR[contador]);
	}
}

void main() 
{
	int matrizA[tamanho];
	int matrizB[tamanho];
	int matrizR[tamanho];

	printf("Informe o tamanho da matriz!\n");
	scanf("%d", &tamanho);

	tamanho = (tamanho * tamanho) -1;

	popularM(tamanho);
	calcular(tamanho);
	resultado(tamanho);

}

