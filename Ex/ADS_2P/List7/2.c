// Sequencia numeros;
#include <stdio.h>
#include <math.h>

void main () {
 float A,B,C, primeiro,segundo,terceiro;
 
 	printf("Informe um valor");
 	scanf("%f", &A);
 	
 	printf("Informe um valor");
 	scanf("%f", &B);
 	
 	printf("Informe um valor");
 	scanf("%f", &C);
 	
 	if(A > B && A > C) {primeiro= A;
 		 if(B > C) {segundo= B; }
 			if(C > B) {segundo= C;}
 				 if(B < C) {terceiro=B;}
 					 if(C < B) {terceiro=C;}
 	}
 			
 	if(B > A && B > C) {primeiro= B;
 		if(A > C) {segundo= A; }
 			 if(C > A) {segundo= C;}
 				 if(A < C) {terceiro=A;}
 					 if(C < A) { terceiro=C;}
 	}
 			
 			
 	if(C > B && C > A) {primeiro= C;
 		 if(B > A) {segundo= B; }
 			 if(A > B) {segundo= A;}
 				 if(A < B) {terceiro= A;}
 					 if(B < A) {terceiro=B;}
 	}
 					
 					
 	printf("primeiro %.2f",primeiro);
 	printf("segundo %.2f",segundo);
 	printf("terceiro %.2f",terceiro);
 			
}
