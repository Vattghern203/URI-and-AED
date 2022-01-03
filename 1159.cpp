#include <bits/stdc++.h>

int main(){
	int i,x,soma;

	do{
		scanf("%d",&x);
			if(x != 0){
				if(x % 2 != 0)
					x++;
				soma = x;
				for(i = 0;i < 4;i++){
					soma=soma+x+2;
					x = x + 2;
				}
			printf("%d\n",soma);
			}
	}while(x != 0);
return 0;
}
