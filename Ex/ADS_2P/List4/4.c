//Quantidade letras;
#include <stdio.h>

void main()
{
   int i = 0;
   char Frase[100];
   
   puts("Digite uma frase\n");
   fgets(Frase,100,stdin);
   
   while(Frase[i] != 0) {
  	i++;
   }
	i = i-1;
	printf("%d",i);
   
}
