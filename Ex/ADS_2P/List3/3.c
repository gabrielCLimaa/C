//Progressão;
#include <stdio.h>

void main () {
	float Anacleto= 1.50, Felisberto= 1.10, Contador=0;

	while(Felisberto < Anacleto) {
		Anacleto= Anacleto + 0.02;
		Felisberto= Felisberto + 0.03;
		Contador++;
		printf("Anacleto=%.2f|",Anacleto);
		printf("Felisberto=%.2f>",Felisberto);
		printf("Ano=%.2f||/",Contador);
	}
}
		
