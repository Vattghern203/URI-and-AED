#include <bits/stdc++.h>

int *result;
double *divresult;

void div (int *n1, int *n2){
	*divresult = double (*n1) / double (*n2);
}

void mult (int *n1, int *n2){
	*result = *n1 * *n2;
}

void soma (int *n1, int *n2){
	*result = *n1 + *n2;
}

void sub (int *n1, int *n2){
	*result = *n1 - *n2;
}

int main(){
	int x, y, r, esc;
	double rdiv;
	result = &r;
	divresult = &rdiv;
	
	printf("Escolha dois numeros: \n");
	scanf("%d%d", &x, &y);
	printf("Faca a escolha da operacao: \n");
	printf("Aperte 1 para Divisao\n");
	printf("Aperte 2 para Multiplicacao\n");
	printf("Aperte 3 para Adicao\n");
	printf("Aperte 4 para Subtracao\n");
	scanf("%d", &esc);
	
	switch (esc){
		case 1:
			div(&x, &y);
			printf("%.2lf", rdiv);
		break;
		
		case 2:
			mult(&x, &y);
			printf("%d", r);
		break;
		
		case 3:
			soma(&x, &y);
			printf("%d", r);
		break;
		
		case 4:
			sub(&x, &y);
			printf("%d", r);
		break;
	}
	return 0;
}
