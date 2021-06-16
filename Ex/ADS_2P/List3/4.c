//Imagem na tela;
#include <stdio.h>

void main () {
	int Tamanho, Contador=0, Contador2=0;
	printf("Informe o tamanho da figura\n");
	scanf("%d", &Tamanho);
	
	while(Contador < Tamanho) {
	
		Contador2=0;
		
		while(Contador2 < Tamanho) {
		
		printf("#");
		Contador2++;	
		
		}
		
	Contador++;
	printf("\n");
	
	}
}
