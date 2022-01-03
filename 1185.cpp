#include <bits/stdc++.h>

int main(){
	char op[5];
	double m[12][12],soma;
	int c,l,i;
	
	scanf("%s",op);
	for(l = 0;l < 12;l++){
		for(c = 0;c < 12;c++){
			scanf("%lf",&m[l][c]);
		}
	}
	
	for(l = 0;l <= 10;l++){
		for(c = 0;c <= 10-l;c++){
			soma += m[l][c];
		}
	}
	
	if(op[0] == 'S')
		printf("%.1lf\n",soma);
	if(op[0] == 'M'){
		soma = soma/66.0;
		printf("%.1lf\n",soma);
	}
	return 0;
}
