//Sorteio alunos;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct configuracao
    {
        char nome[10];
        int sorteio;
    };

typedef struct configuracao cont_Alunos;

void NomeDosAlunos(int numeroMatriculas, cont_Alunos *Sorteio_Nome);
void Sorteados(int numeroMatriculas,cont_Alunos *contagem_Alunos, int *total_matriculas);
void Ordenacao(cont_Alunos *contagem_Alunos,cont_Alunos *Sorteio_Nome, int *total_matriculas,int numeroMatriculas); 

int main(){
    cont_Alunos *contagem_Alunos;
    int numeroMatriculas;
    
    printf("Insira o numero de alunos: \n");
    scanf("%d", &numeroMatriculas);

    cont_Alunos *Sorteio_Nome;
    
    Sorteio_Nome = (cont_Alunos *)malloc(numeroMatriculas * sizeof(cont_Alunos));
    NomeDosAlunos(numeroMatriculas, Sorteio_Nome);

    int *total_matriculas;
    
    total_matriculas = malloc(numeroMatriculas * sizeof(int));
    contagem_Alunos = (cont_Alunos *) malloc(numeroMatriculas * sizeof(cont_Alunos));

    int nova_ordem;
    int registro;

    srand(time(NULL));

    int i = 0;
    do{
        nova_ordem = rand() % numeroMatriculas;
        registro = 0;

        for(int i2 = 0; i2 < i; i2++){
            if(total_matriculas[i2] == nova_ordem){
                registro = 1;
            }
        }

        if(registro == 0){
            total_matriculas[i] = nova_ordem;
            i++;
        }
        } while(i != numeroMatriculas);
        
        
    
	Ordenacao(contagem_Alunos,Sorteio_Nome,total_matriculas,numeroMatriculas);  
	Sorteados(numeroMatriculas,contagem_Alunos,total_matriculas);
	free(total_matriculas);
	free(contagem_Alunos);

return 0;
}



void Ordenacao(cont_Alunos *contagem_Alunos,cont_Alunos *Sorteio_Nome, int *total_matriculas,int numeroMatriculas) {

	for(int i3 = 0; i3 < numeroMatriculas; i3++)
 	{
             strcpy(contagem_Alunos[i3].nome,Sorteio_Nome[total_matriculas[i3]].nome); 
        }
}



void Sorteados(int numeroMatriculas,cont_Alunos *contagem_Alunos,int *total_matriculas) {

for(int i = 0; i < numeroMatriculas;i++) 
        {
            printf("\n");
            printf("Nomes Sorteados    %s Ordem: %d, \n",contagem_Alunos[i].nome,total_matriculas[i]);
            printf("\n");
        }
}



void NomeDosAlunos(int numeroMatriculas,cont_Alunos *Sorteio_Nome) {

    for(int i = 0; i < numeroMatriculas; i++)
    {
        printf("Informe o nome do aluno: \n");
        scanf("%s", Sorteio_Nome[i].nome);
        Sorteio_Nome[i].sorteio = i;
        fflush(stdin); 
    }
}
