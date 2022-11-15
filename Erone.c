#include <stdio.h>
#include <math.h>

int main() {
/*Tiolo*/
	printf("Calcolo l'area del triangolo con la formula di Erone");
	printf("\n");
	printf("\n");
/*Lettura dati*/
	int p;
	int p2;
	int a;
	int b;
	int c;
	printf("Misura perimetro: ");
		scanf("%d", &p);
	printf("Misura lato 1: ");
		scanf("%d", &a);
	printf("Misura lato 2: ");
		scanf("%d", &b);
	printf("Misura lato 3: ");
		scanf("%d", &c);
	p2=p/2;
/*Calcolo parentesi*/
	int difa;
	int difb;
	int difc;
		difa=p2-a;
		difb=p2-b;
		difc=p2-c;
/*Calcolo prodotti*/
	int t;
		t=p2*difa*difb*difc;
/*Calcolo radice finale*/
	int A;
		A=sqrt(t);
/*Output*/
	printf("L'area risulta %d", A);
return 0;
}