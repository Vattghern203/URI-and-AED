#include <bits/stdc++.h>

void Concha (char vet[], int tam){
	int i, j, vao = 1;
	char valor;
	while(vao < tam){
		vao = 3 * vao + 1;
	}
	while(vao > 1){
		vao /= 3;
		for(i = vao; i < tam; i++){
			valor = vet[i];
			j = i - vao;
			while(j >= 0 && valor < vet[j]){
				vet[j + vao] = vet[j];
				j -= vao;	
			}
			vet[j + vao] = valor;
		}
	}
}

int main(){
	int n = 6;
	char vetor[6];
	
	for(int i = 0;i < n; i++){
		scanf("%c", &vetor[i]);
	}
	Concha(vetor, n);
	for(int i = 0; i < n; i++){
		printf("%c", vetor[i]);
	}
	return 0;
}
