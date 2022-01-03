#include <bits/stdc++.h>

int main(){
	int x,i,soma;
	
	do{
		scanf("%d",&x);
		soma = 0;
			for(i = x;i <= x + 5;){
				if(i % 2 == 0){
					soma = soma + i;
					i++;
				}else
				x++;
		}
	}while(x != 0);
	printf("%d\n",soma);
return 0;
}
