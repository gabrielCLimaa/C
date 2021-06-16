//Calc;
#include <stdio.h>

void main () {
	unsigned int Operacao;
	float Numero1, Numero2;	
	while (Operacao != 5) {
	
		puts("1-Soma\n");
		puts("2-Subtracao\n");
		puts("3-Multiplicacao\n");
		puts("4-Divisao\n");
		puts("5-Sair\n");
		puts("Infome uma opção\n");
		scanf("%u", &Operacao);
	
		switch(Operacao) {
		
			case 1: 
			printf("Informe dois numeros\n");
			scanf("%f" "%f", &Numero1, &Numero2);
			Numero1= Numero2 + Numero1;
			printf("O resultado é = %.2f\n",Numero1);
			break;
			case 2:
			printf("Informe dois numeros\n");
			scanf("%f" "%f", &Numero1, &Numero2);
			Numero1= Numero1 - Numero2;
			printf("O resultado é = %.2f\n",Numero1);
			break;
			case 3:
			printf("Informe dois numeros\n");
			scanf("%f" "%f", &Numero1, &Numero2);
			Numero1= Numero2 * Numero1;
			printf("O resultado é = %.2f\n",Numero1);
			break;
			case 4:
			printf("Informe dois numeros\n");
			scanf("%f" "%f", &Numero1, &Numero2);
			Numero1= Numero1/Numero2;
			printf("O resultado é = %.2f\n",Numero1);
			break;
			case 5:
			break;
		}
	}	
}
