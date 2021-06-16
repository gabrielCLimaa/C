//Numeros positivos matriz;
#include <stdio.h>

void main()
{
    int tamanhoM;
    int l;
    int c;
    int v = 1;
    
    printf("Infome o tamanho da matriz\n");
    scanf("%d",&tamanhoM);
    
    int matrizA[tamanhoM][tamanhoM];
    
    for(l = 0;l < tamanhoM;l++) { 
    	for(c = 0;c < tamanhoM;c++) {
    		printf("Informe o valor %d,da matriz 1\n",v);
    		scanf("%d",&matrizA[l][c]);
    		v++;
    	}
    }

    for(l = 0;l < tamanhoM;l++) { 
    	for(c = 0;c < tamanhoM;c++) {
     		if(matrizA[l][c] < 0 ) {
     		printf("#\n");
    	} else {
    		printf("%d\n",matrizA[l][c]);
    	}
	}   
    }

}
