#include <bits/stdc++.h>

int main(){
	int i,x[100],maior;
	
	do{
		scanf("%i",&x[i]);
			
			if(x[i] > maior){
				maior = x[i];
			}	
	}while(x[i] > 0);
	
	printf("%i\n",maior);
return 0;
}
