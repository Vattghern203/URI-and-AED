#include <bits/stdc++.h>

void InserSort (char vet[], int tam){
	int i, j;
	char eleito;
	for(i = 0; i < tam; i++){
		eleito = vet[i];
		j = i - 1;
		while((j >= 0) && (eleito < vet[j])){
			vet[j+1] = vet[j];
			j--;
		}
		vet[j + 1] = eleito;
	}
}

int main(){
	int t = 6;
	char v[6];
	for(int i = 0; i < t; i++){
		scanf("%c", &v[i]);
	}
	InserSort(v, t);
	for(int i = 0; i < t;i++){
		printf("%c", v[i]);
	}
	return 0;
}
