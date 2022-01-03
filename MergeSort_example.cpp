#include <bits/stdc++.h>

void Merge(char esq, char dir){
	char meio;
	if(esq == dir)
		return ;
	else{
		meio = (esq + dir) / 2;
		Merge(esq, meio);
		Merge(meio + 1, dir);
		Merge(esq, meio + 1, dir);
	}
}

void sort(char esq, char dir, char sup){
	char inf = esq;
	char meio = dir - 1;
	char n = sup - inf + 1;
	char i = 0;
	char[]temp = new char[n];
	while(esq <= meio && dir <= sup){
		if(vetor[esq] < vetor[dir]){
			temp[i] = vetor[esq];
			esq++;
			i++;	
		}
		else{
			temp[i] = vetor[dir];
			dir++;
			i++;
		}
		while(esq <= meio){
			temp[i] = vetor[esq];
			esq++;
			i++;
		}
		while(dir <= sup){
			temp[i] = vetor[dir];
			dir++;
			i++;
		}
		for(int j = 0; j < n; j++){
			vetor[inf + j] = temp[j];
		}
	}
}

int main(){
	int t = 6;
	char v[6];
	for(int i = 0; i < t;i++){
		scanf("%c", &v[i]);
	}
	Merge(v, 0, t);
	for(int i = 0;i < t; i++){
		printf("%c", v[i]);
	}
}
