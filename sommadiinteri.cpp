/*
file: somma_interi.c
autore: Rodini Riccardo
data: 21/09/22

somma di due numeri interi e stampa a schermo del risultato

imput: due numeri interi 
elaborazione: somma
output: un numero intero 

*/
#include <stdio.h>  //printf,scanf;
int main()
{
	//due numeri interi
	//dichiariamo le due variabili di imput
	int num1, num2;
	//e output
	int ris;
	
	//input:due numeri interi 
	printf("inserisci il primo numero");
	scanf("%d", &num1);
	printf("inserisci il secondo njumero");
	scanf("%d", &num2);
	
	//elaborazine: somma
	// assegna alla variabile ris 
	// il risultato della espressione num 1+ num 2 
	ris= num1+ num2;
	//output: un numero intero 
	printf("la somma dei due numeri e   %d",ris);
	
	//termino il programma 
	return 0; 
}
