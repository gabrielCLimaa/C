//Notas;
#include <stdio.h>

void main () {
	float nota1, nota2, nota3, media;
	
	printf("Informe as notas\n");
	scanf("%f" "%f" "%f",&nota1, &nota2, &nota3);
	
	media = (nota1 + nota2 + nota3)/3;
	
	if (media <= 3) {
		printf("Reprovado\n");
	} else if(media <= 7) {
		printf("Exame\n");
	} else if(media <= 10) {
		printf("Aprovado\n");
	}
}
