//Calc;
#include <stdio.h>

int pergunta1() 
{
	int numero1;

	puts("Informe um numero!");
	scanf("%d", &numero1);

	return numero1;

}

int pergunta2() 
{
	int numero2;

	puts("Informe um numero!");
	scanf("%d", &numero2);

	return numero2;

}

int exibirMenu () 
{
    int OP;
    
    puts(" 1 - Soma");
    puts(" 2 - Subtração");
    puts(" 3 - Multiplicação");
    puts(" 4 - Divisão");
    puts(" 5 - Sair");
    scanf("%d",&OP);  
   
    	return OP;
    	
}

int soma() 
{
	int numero1;
	int numero2;
	int soma;	 
	numero1 = pergunta1();
	numero2 = pergunta2();

	soma = numero1 + numero2;

	return printf("Soma = %d\n",soma);

}

int subtracao() 
{
	int numero1;
	int numero2;
	int sub;	 
	numero1 = pergunta1();
	numero2 = pergunta2();

	sub = numero1 - numero2;

	return printf("Subtração = %d\n",sub);

}

int multiplicacao()
{
	int numero1;
	int numero2;
	int multi;	 
	numero1 = pergunta1();
	numero2 = pergunta2();

	multi = numero1 * numero2;

	return printf("Multiplicação = %d\n",multi);

}

int divisao() 
{
	int numero1;
	int numero2;
	int div;	 
	numero1 = pergunta1();
	numero2 = pergunta2();

	div = numero1 / numero2;

	return printf("Divisão = %d\n",div);

}

void main()
{
  int OP;
  OP = exibirMenu();
  
  if(OP > 5 || OP < 1) { puts("Operação invalida");}
  
  switch(OP) {
  	case 1: soma();
 	break;
 	case 2: subtracao();
 	break;
 	case 3: multiplicacao();
 	break;
 	case 4: divisao();
 	break;
 	case 5: puts("Aplicação encerrada");
 	break;
 } 
}

