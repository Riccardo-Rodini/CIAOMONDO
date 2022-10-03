/*
autore: Riccardo Rodini
data: 3/10/22
classe: 3H
*/
#include <stdio.h>
#include <math.h>
int main()
{
	float lato,d1;    //imput e significato
	float d2;      // di lavoro
	float area,perimetro;    //output e significato
	//avvalorare imput
	printf("inserisci la misura del lato\t");
	scanf("%f",&lato);
	printf("inserisci misura diagonale minore\t");
	scanf("%f",&d1);
	//calcolo perimetro
	perimetro=lato*4;
	d2=sqrt((lato*lato)-(d1/2*d1/2))*2;
	area=(d1*d2)/2;
	printf("area del rombo e'%.2f\n",area);
	printf("perimetro del rombo e' %.2f",perimetro);
	return 0;
}
