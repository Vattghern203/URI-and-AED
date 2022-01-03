#include<bits/stdc++.h>

int main(){

	int x = 10;

	int *pt1, **pt2;	//Declaração de ponteiros

	pt1 = &x;			//Inicialização do ponteiro pt1 apontando para o endereço de x

	pt2 = &pt1;			//Inicialização do ponteiro pt2 apontando para o endereço de pt1

	printf("\nEndereco na variavel x = %d", &x);

	printf("\nValor na variavel x = %d", x);

	printf("\nEndereco do ponteiro *pt1 = %d", &pt1);

	printf("\nEndereco que o ponteiro guarda pt1 = %d", pt1);

	printf("\nValor apontado na variavel *pt1 = %d", *pt1);

	printf("\nEndereco do ponteiro **pt2 = %d", &pt2);

	printf("\nEndereco que o ponteiro guarda pt2 = %d", pt2);

	printf("\nValor em **pt2= %d\n", **pt2);
	return 0;
}







