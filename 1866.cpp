#include <bits/stdc++.h>

int main(){
	int i,s,n,soma;
	
	i=0;
	
	scanf("%d",&s);
	while(i < s){
	scanf("%d",&n);
		if(n % 2 == 0){
		soma=0;
		printf("%d\n",soma);
		}
		if(n % 2 != 0){
		soma=1;
		printf("%d\n",soma);
		}
	i++;
	}
return 0;	
}
