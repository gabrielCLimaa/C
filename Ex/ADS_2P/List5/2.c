//Dia semana;
#include <stdio.h>

int Numero;

int pedirN () 
{
    printf("Insira o numero do dia!\n");
    scanf("%d",&Numero);
    return Numero;
}
void main()
{
  int Dia;
  Dia = pedirN();
  
  if(Dia > 7 || Dia < 0) { printf("Dia inexistente\n");}
  
  switch(Dia) {
  	case 1: printf("Domingo\n");
  	break;
  	case 2: printf("Segunda\n");
  	break;
  	case 3: printf("Terça\n");
  	break;
  	case 4: printf("Quarta\n");
  	break;
  	case 5: printf("Quinta\n");
  	break;
  	case 6: printf("Sexta\n");
  	break;
  	case 7: printf("Sabado\n");
  	break;
  }
 
}

