#include <bits/stdc++.h>

int maioridade(int *v, int t){
	int a;
	if(t == 1)
		return v[0];
	else{
		a = maioridade(v, t - 1);
		
		if(a > v[t -1])
			return a;
		else
			return v[t - 1];
	}
}

int main(){
	int n, tam, m, i;
	scanf("%d",&n);
	int vet[n];
	for(i = 0; i < n; i++){
		scanf("%d",&vet[i]);
	}
	tam = n;
	m = maioridade(vet,tam);
	printf("%d\n", m);
	return 0;
	
}
