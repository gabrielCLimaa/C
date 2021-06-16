//Reajuste salario;
#include <stdio.h>

void main () {
	float Salario, Reajuste;
	
	printf("Informe o salario\n");
	scanf("%f", &Salario);
	
	if(Salario < 500) {
		Reajuste= Salario * 0.15;
		printf("O reajuste sera = %.2f",Reajuste);
	} else if(Salario >= 500 && Salario <= 1000) {
		Reajuste= Salario * 0.10;
		printf("O reajuste sera = %.2f",Reajuste);
	} else if(Salario > 1000) {
		Reajuste= Salario * 0.05;
		printf("O reajuste sera = %.2f",Reajuste);
	}
}	
	
