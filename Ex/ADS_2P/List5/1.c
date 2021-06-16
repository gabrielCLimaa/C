//Contagem regressiva;
#include <stdio.h>

int Numero;

void pedirN () 
{
    printf("Insira um numero\n");
    scanf("%d",&Numero);
}
void main()
{

  pedirN();
  
  do {
  	printf("Contagem :%d\n",Numero);
  	Numero--;
  } while(Numero != -1) ;
     
}

