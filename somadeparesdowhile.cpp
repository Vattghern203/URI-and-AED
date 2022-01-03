#include <bits/stdc++.h>

int main(){
	int i,x,soma,par;

	while(scanf("%d",&x) != 0){
		soma = 0;
		par = 0;
		while(par <= 5)
			if(x % 2 == 0){
				soma = soma + x;
				par ++;
			}
		x++;
	printf("%d\n",soma);
	}
return 0;
}
