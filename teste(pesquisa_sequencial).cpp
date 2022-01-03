#include <bits/stdc++.h>

int Pesqbin (int Elem, int V[], int tam)
{
	int inicio = 0, fim = tam - 1, meio, ok = -1;
	while((inicio <= fim) && (ok == -1)){
		meio = (inicio + fim) / 2;
		if(Elem == V[meio])
			ok = meio;
			else
				if(Elem < V[meio])
					fim = meio - 1;
				else
					inicio = meio - 1;
	}
	return (ok);
}

int main(){
	int vet[10], i, busca, r;
	for(i = 0; i < 10; i++){
		scanf("%d",&vet[i]);
	}
	printf("Quem tu buscas: \n");
	scanf("%d",&busca);
	r = Pesqbin (busca, vet, i);
	printf("%d\n", r);
	return 0;
}
