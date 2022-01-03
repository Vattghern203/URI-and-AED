#include <bits/stdc++.h>

int main(){
	double m[12][12],soma = 0.0;
	int L,i,j;
	char op[10];
	
	scanf("%d",&L);
	scanf("%s",&op);
	
	for(i = 0;i < 12;i++)
	for(j = 0;j < 12;j++)
		scanf("%lf",&m[i][j]);
		
	for(j = 0;j < 12;j++)
		soma += m[L][j];
		
	if(op[0] == 'M'){
		soma = soma/12.0;
		printf("%.1lf\n", soma);
	}
	if(op[0] == 'S')
		printf("%.1lf\n", soma);
	
	return 0;
}
