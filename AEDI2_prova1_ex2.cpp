#include <bits/stdc++.h>

int PesqBin(int elem,int* v, int tam);
int PesqSeq(int elem,int* v, int tam);

int main(){
	int num, PB, PS;
	int vet[20] = {3, 7, 20, 25, 26, 28, 30, 34, 42, 44, 50, 60, 68, 75, 86, 99, 125, 145, 209, 250};
	
	
	printf("Digite o elemento a ser encontrado: ");
	scanf("%d", &num);
	
	PB = PesqBin(num, vet, 20);
	PS = PesqSeq(num, vet, 20);
	
	printf("Atraves da busca Binaria, foram feitas %d comparacoes \n", PB);
	printf("Atraves da busca Sequencial, foram feitas %d comparacoes \n", PS);
	
	if((PB==-1)||(PS==0)){
		printf("O numero buscado não foi encontrado");
	}
	else
	printf("Pelo metodo de busca Binaria, foram necessarias %d comparacoes.\n", PB);
	printf("Pelo metodo de busca Sequencial, foram necessarias %d comparacoes.\n", PS);
	
	return 0;
	
}

int PesqBin(int elem, int* v, int tam){
	
	int inicio = 0, meio, fim = tam -1, ok = -1, count = 0;
	
	while((inicio <= fim) && (ok == -1)){
		meio=(inicio + fim) / 2;
		
		if(elem == v[meio])
			ok = meio;
		else
			count = count + 1;
			if(elem < v[meio])
				fim = meio-1;
			else
				inicio = meio + 1;
	}

	return (count);
}

int PesqSeq(int elem, int* v, int tam){
	int i;
	
	for(i = 0; i < tam; i++){
		if(v[i] == elem)
			return i;
	}
	return 0;
}
