//Controle de carga;
#include <stdio.h>

void main () {
	unsigned int codigoEstado, codigoCarga;
	float peso, precoCarga, pesoQuilos, valorImposto, valorTotal;

	printf("Informe o codigo do estado\n");
	scanf("%u", &codigoEstado);
	
	printf("Informe o codigo da carga\n");
	scanf("%u", &codigoCarga);
	
	printf("Informe o peso do caminhão em toneladas\n");
	scanf("%f", &peso);
	
	if(codigoEstado < 1 || codigoEstado > 5) {
		printf("Erro, estado inexistente\n");
	} else if( codigoCarga < 10 || codigoCarga > 40) { printf("Erro, codigo de carga invalido\n");}
	
	pesoQuilos= peso * 1000;
	
	if(codigoCarga >= 10 && codigoCarga <= 20) { precoCarga= pesoQuilos * 100;} 
	else if (codigoCarga >=21 && codigoCarga <= 30) { precoCarga= pesoQuilos * 250;} 
	else if (codigoCarga >=31 && codigoCarga <= 40) { precoCarga= pesoQuilos * 340;} 
	 
	 switch (codigoEstado) {
	 	case 1: valorImposto= precoCarga * 0.35;
	 	break;
	 	case 2: valorImposto= precoCarga * 0.25;
	 	break;
	 	case 3: valorImposto= precoCarga * 0.15;
	 	break;
	 	case 4: valorImposto= precoCarga * 0.05;
	 	break;
	 	case 5: valorImposto= 0;
	 	break;
	 }
	 
	 valorTotal= precoCarga + valorImposto;
	 
	 printf("O peso é : %.2f.\n",pesoQuilos);
	 printf("O preco da carga é : %.2f.\n",precoCarga);
	 printf("O valor de imposto é : %.2f.\n",valorImposto);
	 printf("O valot total é de : %.2f.\n",  valorTotal);
}
	 	
	
