#include <bits/stdc++.h>

int num(int z){

	int i,soma = 0;
	for(i = 2;i < z;i++){
	soma = soma + i;
	}
	return soma;
}

int main(){
	int n,x = 0;
	scanf("%d", &n);
	x= num(n);
	printf("%d\n",x);
	return 0;
}
