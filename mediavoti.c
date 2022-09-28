/*
  file: media_voti.c
  autore: Rodini Riccardo  
  data: 28/09/22
  classe: 3H

  Media dii tre voti
  
  imput tre numeri con la virgola 
  elaborazione: media di tre voti 
  output:un numero con la virgola 
*/
#include<stdio.h>
int main()
{ 
//dichiariamo le tre variabili 
  float num1, num2, num3;
//e output
  float ris;
  
  //avvalorare imput
  printf("inserisci il primo numero\t");
  scanf("%f", &num1);
  printf("inserisci il secondo numero\t");
  scanf("%f", &num2);
  printf("inserisci il terzo numero\t");
  scanf("%f", &num3);
  
  //elaboratore :tutte le istruzioni per passare dall'imput all'output
  //assegnia alla variabile ris il risultato della espressione num1+num2+num3
  ris=(num1+num2+num3)/3;
  
  //output:un numero con la virgola
  //visualizza output
  printf("il risultato della media dei voti e \t %.2f", ris);
  
  //terminiamo il programma 
  
return 0;
}

