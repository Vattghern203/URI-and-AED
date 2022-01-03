#include <bits/stdc++.h>

int main (){
	int x,soma,par;	
	
	do{
		scanf("%d",&x);
		soma = 0;
		for(par = 1;par <= 5;){
			if(x % 2 == 0){
				par++;
				soma = soma + x;	
			}
		x++;
		}
	printf("%d\n",soma);
	}while(x != 0);
return 0;
}
