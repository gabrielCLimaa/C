//Quartos hotel;
#include <stdio.h>

int main()
{
   int OP, c, l, quarto, andar, opcao;
   char quartos[5][10];
   
   for(l = 0;l <= 4;l++){
	 for(c = 0;c <= 9;c++) {
	 	quartos[l][c] = 'O'; 		
	 		}
	 printf("\n");
   }
   
	do {
   
	   puts("1: Imprimir lista de quartos!");
	   puts("2: Definir ocupação!");
	   puts("3: Sair!");
	 	scanf("%d",&OP);
 
	   switch(OP) {
 		case 1: 
 			for(l = 0;l <= 4;l++){
		 		for(c = 0;c <= 9;c++) {
		 			printf("%c",quartos[l][c]); 
		 			printf(" "); 		
				}
			 printf("\n");
			 }
 		break;
 		
 		case 2:
 			puts("Informe o andar que deseja definir?");
 			scanf("%d",&andar);
 			puts("Informe o numero do quarto que deseja definir?");
 			scanf("%d",&quarto);
 			puts("Informe a definição, 1 para livre ou 2 para ocupado?");
 			scanf("%d", &opcao);
 			
 			if(andar < 0 || andar > 5 || quarto < 0 || quarto > 10 || opcao < 0 || opcao > 2) { puts("Erro quarto, andar ou opcão invalidos");}
 			quarto = quarto - 1;
 			andar = andar - 1;
 			
 			if(opcao == 1) {
 				quartos[andar][quarto] = 'L';
 			} else if(opcao == 2) { quartos[andar][quarto] = 'Q';}
 		
 		break;
 		
 		case 3: return 0;
 		break;
   
	  } 
	} while (OP != 3);
  
}
