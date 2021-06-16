//Sorteio alunos;
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include<time.h>


struct Aluno {
	char nome[20];
};

typedef struct Aluno alunos;

	int numeroMatriculas();

	void main() {

	int nMatriculas = numeroMatriculas();

	alunos *Nomes;
	Nomes = malloc(nMatriculas * sizeof(alunos));
	
	for(int i = 0;i < nMatriculas;i++) {
	
		__fpurge(stdin);
		printf("Informe o nome do aluno %d\n",i);
		fgets(Nomes[i].nome,20,stdin);
		__fpurge(stdin);
	}
	
	alunos *sorteio;
	sorteio = malloc(nMatriculas * sizeof(alunos));
		
	int *ordem;
	ordem = malloc(nMatriculas * sizeof(int));

	srand(time(NULL));
	int sorteado;
	int contador;
	
	for(int i = 0; i < nMatriculas; i++){
		sorteado = rand() % nMatriculas;
		contador = 0;
	
	        for(int i2 = 0; i2 < i; i2++){
	        
	            if(ordem[i2] == sorteado){
	                contador = 1;
	            }
	        }
	
	        if(contador == 0){
	            ordem[i] = sorteado;
	        } else {i--;}
	        
	    }
			
    	for(int i3 = 0; i3 < nMatriculas; i3++){
    	    
		strcpy(sorteio[i3].nome,Nomes[ordem[i3]].nome); 
	}
		
	printf("--------------------------------------------\n");
	printf("---ALUNOS SORTEADOS PARA PROVA ORAL---\n");
	printf("--------------------------------------------\n");
	    
	for(int i = 0; i < nMatriculas;i++) {
			
		printf("------------------------------------------\n");
		printf("ORDEM: %d, NOMES SORTEADOS>: %s \n",ordem[i],sorteio[i].nome);
		printf("------------------------------------------\n");
	}
	
	free(Nomes);
	free(sorteio);
	free(ordem);
	
}

int numeroMatriculas() {

int numeroMatriculas;

	puts("Informe o numero de matriculas\n");
	scanf("%d",&numeroMatriculas);

	return numeroMatriculas;
}


