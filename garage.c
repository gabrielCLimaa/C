
    #include <stdio.h>
    #include <string.h>
    #include <stdbool.h>
    #include <stdlib.h>

    typedef struct {
        int id;
        char modelo[10];
        float price;
        int ano;
    } Carro;

    typedef struct {
        Carro **carros;
        int numeroDeCarros;
        int numeroMaximoDeCarros;
    } List;

    typedef struct {
        char nomeGaragem[10];    
        List *cars;
    } Garagem;

    List* start(int numeroMaximoDeCarros) {
        List *lista = (List*) malloc(sizeof(List));
        lista->numeroMaximoDeCarros = numeroMaximoDeCarros;
        lista->numeroDeCarros = 0;
        lista->carros = (Carro**) malloc(numeroMaximoDeCarros * sizeof(Carro*));
        return lista;
    }

    bool insertCar(List *lista, Carro *carro, int indice) {
        if(indice < lista->numeroMaximoDeCarros && indice >= 0 && lista->numeroMaximoDeCarros != lista->numeroDeCarros) {

            for(int i = lista->numeroDeCarros; i >= 0; i--){
                if(i == indice) 
                    break;
            lista->carros[i] = lista->carros[i - 1];
            }

            lista->carros[indice] = carro;
            lista->numeroDeCarros += 1;

        return true;
        } else {return false;}
    }

    bool removeCarByIndice(List *lista, int indice) {
        if(indice < 0 || indice >= lista->numeroDeCarros){
    		return NULL;
    	}
        int i;
        Carro *c1 = lista->carros[indice];
        for(i = indice; i < lista->numeroDeCarros;i++){
            lista->carros[i] = lista->carros[i + 1];
        }
        lista->carros[i] = NULL;
        lista->numeroDeCarros -= 1;
        return c1;

    }

    bool removeCarById(List *lista, int id) {
        int indice;
        for(indice=0;indice < lista->numeroDeCarros; indice++) {
            if(lista->carros[indice]->id == id)
                break;
        }
        if(indice == lista->numeroDeCarros)
            return NULL;
        
        return removeCarByIndice(lista,indice);
    }

    int getNumeroDeCarros(List *lista) {
        return lista->numeroDeCarros;
    }

    Carro* getCarById(List *lista, int id) {
        for(int i = 0; i < lista->numeroDeCarros; i++) {
            if(lista->carros[i]->id == id) 
                return lista->carros[id];
        }
        return NULL;
    }

    Carro* getCarByIndice(List *lista, int indice) {
        if(indice >= lista->numeroDeCarros || indice < 0){
    		return NULL;
    	}
        return lista->carros[indice];
    }

    int getIndiceById(List *lista,int id) {
        for(int i = 0; i < lista->numeroDeCarros; i++) {
            if(lista->carros[i]->id == id)
                return i;
        }
        return -1;
    }

    void printList(List *lista ) {
        for(int i = 0; i < lista->numeroDeCarros; i++) {
            printf(" id: %d\n preço: %f\n ano: %d\n modelo: %s\n", lista->carros[i]->id,lista->carros[i]->price,lista->carros[i]->ano, lista->carros[i]->modelo);
            printf("------------------------------------\n");
        }

    }

    void main () {
        Garagem *garagem = malloc(sizeof(Garagem));

        int opcao = -1, sizeList, ano, id, indice;
        char modelo[10];
        float price;
  
        printf("Informe o nome da garagem,(O NOME NAO PODE TER ESPACOS)\n");
        scanf("%s",garagem->nomeGaragem);
        printf("Informe a quantidade de carros que ela pode armazenar!!\n");
        scanf("%d",&sizeList);
        garagem->cars = start(sizeList);
        fflush(stdin);

        while(opcao != 0) {
            puts("2) Para adcionar carro\n");
            puts("3) Para remover carro id\n");
            puts("4) Para listar os carros\n");
            puts("5) Para ver carro por id\n");
            puts("6) Para ver carro por indice\n");
            puts("7) Para remover carro por indice\n");
            puts("0) SAIR\n");
            scanf("%d", &opcao);

            switch(opcao) {
                case 0:
                break;
                case 2:
                    printf("Informe o modelo do carro\n");
                    scanf("%s",modelo);
                    printf("Informe o preco\n");
                    scanf("%f", &price);
                    printf("Informe o ano de fabricacao\n");
                    scanf("%d",&ano);
                    puts("O indice nao pode ser maior que o numero de carros da lista!!!\n");
                    printf("Informe o indice\n");
                    scanf("%d",&indice);
                    Carro *carro = malloc(sizeof(Carro));

                    strcpy(carro->modelo,modelo);
                    carro->price = price;
                    carro->ano = ano;
                    carro->id  = garagem->cars->numeroDeCarros;

                    insertCar(garagem->cars,carro,indice);
                break;
                case 3:
                    printf("Informe o id\n");
                    scanf("%d",&id);
                    removeCarById(garagem->cars,id);
                break;
                case 4:
                    puts(garagem->nomeGaragem);
                    puts("---------------------------------\n");
                    printList(garagem->cars);
                break;
                case 5:
                    printf("Informe o id\n");
                    scanf("%d",&id);
                    Carro * carroToPrint = getCarById(garagem->cars,id);
                    printf(" id: %d\n preço: %f\n ano: %d\n modelo: %s\n", carroToPrint->id,carroToPrint->price,carroToPrint->ano, carroToPrint->modelo);
                break;
                case 6:
                    printf("Informe o indice\n");
                    scanf("%d",&indice);
                    Carro * carroToPrint2 = getCarByIndice(garagem->cars,indice);
                    printf(" id: %d\n preço: %f\n ano: %d\n modelo: %s\n", carroToPrint2->id,carroToPrint2->price,carroToPrint2->ano, carroToPrint2->modelo);
                break;
                case 7:
                    printf("Informe o indice\n");
                    scanf("%d",&indice);
                    removeCarByIndice(garagem->cars,indice);
                break;
                default:
                    puts("Opção invalida");
                break;
            }
        }
    }
