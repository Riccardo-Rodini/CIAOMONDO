/*
    file: area_triangolo.c
    autore: Rodini Riccardo
    data: 26/09/22
    classe: 3H
    
    Calcola l'area di un triangolo
    
    input: base e altezza
    elaborazione: tutte le istruzioni per passare dall' imput all' output
    output: un numero con la virgola 
*/

#include <stdio.h> //printf, scanf

int main() 
{
	//dichiariamo le variabili imput
	float base,altezza; //input
	float area; //output 
	//avvalorare input 
	area = base * altezza;
	//visualizza output
	printf("area triangolo = /t%f",area);
	return 0;
}
