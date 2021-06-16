//Menu;
#include <stdio.h>

void  main () {
	int Entrada;
	
	printf("Isira um valor inteiro\n");
	scanf("%d" , &Entrada);
	
	switch (Entrada) {
		case 1 : printf("Voce entrou com valor 1\n") ;
		break;
		case 2 : printf("Voce entrou com valor 2\n");
		break;
	}
	if (Entrada < 1) {
		printf("Voce entrou com valor muito baixo\n");
	} else if(Entrada > 1) {
		printf("Voce entrou com um valor muito alto\n");
	}
}
