#include <bits/stdc++.h>

void quicksort(char *V[], int inicio, int fim){
	int pivo;
	if(inicio < fim){
		pivo = particiona(*V[], inicio, fim);
		quicksort(V, pivo + 1, fim);		
	}
}

int particiona(int *V, int inicio, int fim){
	int esq, dir, pivo, aux;
	esq = inicio;
	dir = fim;
	pivo = V[inicio];
	while(esq < dir){
		while(V[esq] <= pivo)
			esq++;
		while(V[dir] > pivo)
			dir--;
		if(esq < dir){
			aux = V[esq];
			V[esq] = V[dir];
			V[dir] = aux;
		}
	}
	V[incio] = V[dir];
	V[dir] = pivo;
	return dir;
}

int main(){
	char vet[6] = {'UMDOIS'};
	int n = 6, i = 0
	quicksort(vet, i, n);
	for(i = 0; i < n; i++){
		printf("%c", vet[i]);
	}
	return 0;
}
