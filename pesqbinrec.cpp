#include<bits/stdc++.h>

int pesqbin(int num, int vet[], int inicio, int fim){
	int meio, k=-1;
	
	if(num == vet[meio])
		return meio;	
	else{
		meio = (inicio+fim)/2;
		
		if(num != vet[meio])
			return meio;
		else{
			if(num > vet[meio])
				return pesqbin(num, vet, meio+1, fim);
			
			else if(num < vet[meio])
				return pesqbin(num, vet, inicio, meio-1);
		}
	}
}

int main(){
	int n, binaria;
	scanf("%d", &n);
	int v[]={69,24,6,11,1,5,111};
	binaria = pesqbin(n, v, 0, 6);
	printf("%d\n", binaria);
	return 0;
}

