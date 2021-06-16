#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include<time.h>


struct Quarto {
	
int numeroQuarto;
char proprietario[100];
float valorServico; 
int id;
	
};

typedef struct Quarto TailleurService;

void insert(TailleurService *service);
void delete(TailleurService *service,int *id);
void list(TailleurService *service);
void valoresIniciais(TailleurService *service);

void main (){

TailleurService *lavanderia;
lavanderia = malloc(100 * sizeof(TailleurService));
int *id;
id = malloc(1 * sizeof(int));
int menu;
valoresIniciais(lavanderia);

do { 

        
            puts("1) Listar\n");
            puts("2) Registrar\n");
            puts("3) Excluir\n");
            puts("4) Sair\n");
            scanf("%d",&menu);

            switch (menu)
            {
            case 1: list(lavanderia);
                break;
            case 2: insert(lavanderia);
                break;
            case 3: puts("Informe o numero do quarto que deseja excluir\n");
                    scanf("%d",&id[0]);
                    delete(lavanderia,id);
                break;
            case 4:
                break;
            }
    } while(menu != 4);
  free(id);
  free(lavanderia);

    
}

void delete(TailleurService *service,int *id) {
    
        for(int i = 0; i < 100;i++) {
            if(service[i].id == *id) {
            service[i].numeroQuarto = -1;
            strcpy(service[i].proprietario,"0\n");
            service[i].valorServico = 0.0;
            }
        }
}

void list(TailleurService *service) {

    for(int i =0;i < 100;i++) {
        if(service[i].numeroQuarto != -1) {
        printf("--------------------------------------\n");
        printf("Id: %d \n",service[i].id);
        printf("Numero quarto: %d\n",service[i].numeroQuarto);
        printf("Nome propietario: %s\n",service[i].proprietario);
        printf("Valor serviço: %2.2f\n",service[i].valorServico);
        printf("--------------------------------------\n");
        }
    }
}

void insert(TailleurService *service) {

    for(int i2 = 0; i2 < 100;i2++) {

        if(service[i2].numeroQuarto == -1 && service[i2].valorServico == 0.0) {

            
        
            printf("Informe o numero do quarto!\n");
            scanf("%d", &service[i2].numeroQuarto);
            service[i2].id = service[i2].numeroQuarto;
        
            printf("Informe o nome do propietario!\n");
            scanf("%s",service[i2].proprietario);
            
            printf("Informe o valor total!\n");
            scanf("%f", &service[i2].valorServico);
            

            break;
        }
    }
}

void valoresIniciais(TailleurService *service) {

     for(int i = 0;i < 100;i++) {

        if(i == 1) {
            service[i].id = i;
            service[i].numeroQuarto = i;
            strcpy(service[i].proprietario,"Wilson das Neves");
            service[i].valorServico = 0.0;
        }
        if(i == 2) {
            service[i].id = i;
            service[i].numeroQuarto = i;
            strcpy(service[i].proprietario,"Osvalod");
            service[i].valorServico = 0.0;
        }
        if(i == 7) {
            service[i].id = i;
            service[i].numeroQuarto = i;
            strcpy(service[i].proprietario,"VIPs");
            service[i].valorServico = 0.0;
        }
        if(i == 9) {
            service[i].id = i;
            service[i].numeroQuarto = i;
            strcpy(service[i].proprietario,"For dummies");
            service[i].valorServico = 3459.49;
        } else if(i != 1 && i != 2 && i != 7 && i != 9) {
            service[i].id = i;
            service[i].numeroQuarto = -1;
            strcpy(service[i].proprietario,"0\n");
            service[i].valorServico = 0.0;
        }
    }
}
