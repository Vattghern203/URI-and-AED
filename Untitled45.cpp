#include<bits/stdc++.h>

int pesquisaBinaria(int elem,int* v, int tam);
int pesquisaSequencial(int elem,int* v, int tam);

int main(){
	int num, resB,resS;
	int vet[20] = {3,7,20,25,26,28,30,34,42,44,50,60,68,75,86,99,125,145,209,250};
	
	
	printf("Digite o número que deseja buscar:\n");
	scanf("%d",&num);
	
	resB= pesquisaBinaria(num,vet,20);
	resS= pesquisaSequencial(num,vet,20);
	
	printf("Pelo metodo de busca Binaria, foram necessarias %d comparacoes.\n",resB);
	printf("Pelo metodo de busca Sequencial, foram necessarias %d comparacoes.\n",resS);
	
	if((PB==-1)||(PS==0)){
		printf("O numero buscado não foi encontrado");
	}
	else
	printf("Pelo metodo de busca Binaria, foram necessarias %d comparacoes.\n", PB);
	printf("Pelo metodo de busca Sequencial, foram necessarias %d comparacoes.\n", PS);
	
	return 0;
	
}

int pesquisaBinaria(int elem,int* v, int tam){
	
	int inicio=0, meio, fim=tam-1, k=-1, count=0;
	
	while((inicio <= fim)&&(k == -1)){
		meio=(inicio+fim)/2;
		
		if(elem == v[meio])
			k=meio;
		else
			count=count+1;
			if(elem< v[meio])
				fim = meio-1;
			else
				inicio = meio+1;
	}

	return (count);
}

int pesquisaSequencial(int elem,int* v, int tam){
	int i;
	
	for(i=0;i<tam;i++){
		if(v[i] == elem)
			return i;
	}
	return 0;
}
