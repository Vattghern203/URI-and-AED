#include <stdio.h>
#include <stdlib.h>
 
main () {
   
 int potencia,numero,resultado;
 
 printf ("Numero a ser elevado: ");
 
scanf ("%d",&numero);
 
printf ("Potencia: ");
 
scanf("%d", &potencia);
 
resultado = numero;
 
while (potencia != 1) {
  
resultado = resultado*numero;
 
potencia--;
 }
 
printf   ("Resultado: %d\n",resultado);
 
system  ("pause");
}
