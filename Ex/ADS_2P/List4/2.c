//Sub matrizes;
#include <stdio.h>

void main()
{
    int tamanhoM;
    int l;
    int c;
    int v = 1;
    int v2= 1;
    
    printf("Infome o tamanho da matriz\n");
    scanf("%d",&tamanhoM);
    
    int matrizA[tamanhoM][tamanhoM];
    
    int matrizB[tamanhoM][tamanhoM];
    
    int matrizR[tamanhoM][tamanhoM];
    
    for(l = 0;l < tamanhoM;l++) { 
    	for(c = 0;c < tamanhoM;c++) {
    		printf("Informe o valor %d,da matriz 1\n",v);
    		scanf("%d",&matrizA[l][c]);
    		v++;
    	
        }	
    } 
    for(l = 0;l < tamanhoM;l++) { 
    	for(c = 0;c < tamanhoM;c++) {
    		printf("Informe o valor %d,da matriz 2\n",v2);
    		scanf("%d",&matrizB[l][c]);
    		v2++;
    	
        }
    }
   
    for(l = 0;l < tamanhoM;l++) { 
    	for(c = 0;c < tamanhoM;c++) {
    		matrizR[l][c]= matrizA[l][c] + ( -matrizB[l][c]);
    	
        }  
    }
   
    printf("1: %i\n 2: %i\n 3: %i\n 4: %i\n",matrizR[0][0],matrizR[0][1],matrizR[1][0],matrizR[1][1]);    
}

