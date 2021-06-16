//Exponenciação;
#include <stdio.h>

int base1() 
{
	int base;

	puts("Informe a base!\n");
	scanf("%d",&base);

	return base;

}

int expoente()
{
	int expoente;

	puts("Informe o expoente!\n");
	scanf("%d",&expoente);

	return expoente;

}

void main() {

	int base;
	int expo;
	int resultado;
	int contador = 1;

	base = base1();
	expo = expoente();

	if(base == 0 || base == 1) { printf("Resultado = %d\n",base);}
	else if(expo == 1) { printf("Resultado = %d\n", base);}
	else if(expo == 0) { printf("Resultado = 1\n");}

	resultado = base;

	while(contador < expo) {
		resultado *= base;
		contador++;
	}

	printf("Resultado = %d\n",resultado);

}




