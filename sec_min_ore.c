/*
file: sec_c
autore: Riccardo Rodini
classe: 3H
data: 5/10/22

numero dei secondi trasformandolo in ore,minuti,secondi
*/

#include<stdio.h>//printf,scanf
int main()
{
	//dichiariamo le variabili di imput
	int sec1;
	//dichiariamo le variabili di output
	int ore,min,sec2;
	//imput
	printf("inserisci i secondi\t");
	scanf("%d",&sec1);
	//elaborazione: tutte le istruzioni per passare dall'imput all'output
	//assegna alla variabile ore uil risultato dell'espressione
	ore=sec1/3600;
	//assegna alla variabile min il risultato dell'espressione 
	min=sec1/60;
	//assegna alla variabile sec2 il risultato dell'espressione
	sec2=sec1*1;
	//visualizza in output
	printf("ore=%.2d\n",ore);
	printf("min=%.2d\n",min);
	printf("sec2= %.2d\n", sec2);
	return 0;  
}

