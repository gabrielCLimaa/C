//Baskara;
#include <stdio.h>
#include <math.h>

int main () {
	float b, a, c, x1, x2, d, x3, x4;
	
	printf("Informe a\n");
	scanf("%f", &a);
	
	printf("Informe b\n");
	scanf("%f", &b);
	
	printf("Informe c\n");
	scanf("%f", &c);
	
	d=  pow(b,2) - 4 * a * c;
	x1=  -b + (sqrt(d));
	x2= -(b) - (sqrt(d));
	x3= x1 / (a * 2);
	x4= x2 / (a * 2);
	
	printf("O valor de x1 %f.\n",x3);
	printf("O valor de x2 %f.\n",x4);
	return 0;
}
