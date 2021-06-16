//Soma letra nome;
#include <stdio.h>

void main() {
    int f;
    int i = 26;
    int Soma = 0;
    char Nome[i];
    
    puts("Informe o seu nome em letra minuscula!");
    fgets(Nome,i,stdin);
    
    for(f = 0;f <= i; f++) {
    
	    if(Nome[f] == 'a') {
		Soma += 97;
	    }
	    if(Nome[f] == 'b') {
		Soma += 98;
	    }
	    if(Nome[f] == 'c') {
		Soma += 99;
	    }
	    if(Nome[f] == 'd') {
		Soma += 100;
	    }
	    if(Nome[f] == 'e') {
		Soma += 101;
	    }
	    if(Nome[f] == 'f') {
		Soma += 102;
	    }
	    if(Nome[f] == 'g') {
		Soma += 103;
	    }
	    if(Nome[f] == 'h') {
		Soma += 104;
	    }	
	    if(Nome[f] == 'i') {
		Soma += 105;
	    }
	    if(Nome[f] == 'j') {
		Soma += 106;
	    }
	    if(Nome[f] == 'k') {
		Soma += 107;
	    }
	    if(Nome[f] == 'l') {
		Soma += 108;
	    }
	    if(Nome[f] == 'm') {
		Soma += 109;
	    }
	    if(Nome[f] == 'n') {
		Soma += 110;
	    }
	    if(Nome[f] == 'o') {
		Soma += 111;
	    }
	    if(Nome[f] == 'p') {
		Soma += 112;
	    }
	    if(Nome[f] == 'q') {
		Soma += 113;
	    }
	    if(Nome[f] == 'r') {
		Soma += 114;
	    }
	    if(Nome[f] == 's') {
		Soma += 115;
	    }
	    if(Nome[f] == 't') {
		Soma += 116;
	    }
	    if(Nome[f] == 'u') {
		Soma += 117;
	    }
	    if(Nome[f] == 'v') {
		Soma += 118;
	    }
	    if(Nome[f] == 'w') {
		Soma += 119;
	    }
	    if(Nome[f] == 'x') {
		Soma += 120;
	    }
	    if(Nome[f] == 'y') {
		Soma += 121;
	    }
	    if(Nome[f] == 'z') {
		Soma += 122;
	    }
	}
    printf("A SOma é: %d\n",Soma);    
}

