//Palindromo;
#include <stdio.h>

char texto2[50];
char texto[50];

void main() {

	int tamanhoTexto = 0, contador, contador2, CHECK = 0;

	puts("Informe o texto!!");
	fgets(texto,50,stdin);

	while(texto[tamanhoTexto] != 0) { tamanhoTexto++;}
		tamanhoTexto = tamanhoTexto - 1;

	char texto2[tamanhoTexto];

	contador2 = tamanhoTexto;

	for(contador = 0;contador <= tamanhoTexto;contador++)
	{
		texto2[contador] = texto[contador2];
		contador2--;
	}

	contador2 = tamanhoTexto;

	for(contador = 0;contador <= tamanhoTexto;contador++)
	{
		if(texto[contador] == texto2[contador2]) { contador2--;
		 CHECK++;}
	}

	CHECK = CHECK - 1;

	if(CHECK == tamanhoTexto) { puts("POLINDROMO");} else { puts("NAO FOI DESSA VEZ");}

}
 




 














