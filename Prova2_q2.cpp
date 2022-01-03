#include <bits/stdc++.h>

int main(){
	int n,num[1001],i,maior,menor,maiorv = 0,menorv = 0;
	
	maior = -1;
	
	menor = 99999;
	
	scanf("%d",&n);
	
	for(i = 0;i < n;i++){
		scanf("%d",&num[i]);
			if(num[i] > maior)
				maior = num[i];
			if(num[i] <= menor && num[i] < maior)
				menor = num[i];			
	}
	for(i = 0;i < n;i++){
		if(num[i] == maior)
			maiorv++;
		if(num[i] == menor)
			menorv++;
	}
	printf("Maior: %d apareceu %d vez(es)\n",maior,maiorv);
	printf("Menor: %d apareceu %d vez(es)\n",menor,menorv);

return 0;
}

