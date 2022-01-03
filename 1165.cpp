#include <bits/stdc++.h>

int main(){
	int i,n,x,div,cont;
	
	scanf("%d",&n);
	
	for(cont = 0 ; cont < n ; cont++){
		scanf("%d",&x);
		div = 0;
		for(i = 1 ; i <= x ; i++){
			if(x % i == 0)
				div ++;
		}
		if(div == 2)
			printf("%d eh primo\n",x);
		else
			printf("%d nao eh primo\n",x);
	}		
return 0;
}
