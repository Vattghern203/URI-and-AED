#include <bits/stdc++.h>

int binariabusca (int Elem, int v[], int tam){
	int inicio = 0, fim = tam - 1, meio, k = -1;
	while((inicio <= fim) && (k == -1)){
		meio = (inicio + fim) / 2;
		if(Elem == v[meio])
			k = meio;
		else
			if(Elem < v[meio])
				fim = meio - 1;
			else
				inicio = meio + 1;
	}
	return (k);
}

int main(){
	int x, vetor[100], tamanho, i, result;
	printf("O tamanho sera de: ");
	scanf("%d",&tamanho);
	for(i = 0; i < tamanho; i++){
		scanf("%d",&vetor[i]);
	}
	printf("Procura por: ");
	scanf("%d",&x);
	result = binariabusca(x, vetor, tamanho);
	printf("%d esta na posicao %d\n", x, result);
	return 0;
}
