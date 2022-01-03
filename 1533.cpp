#include <bits/stdc++.h>

int main(){
	int n,i,x[10000],maior,pos;

	scanf("%d",&n);
	while(n != 0){
			maior = -1;	
			for(i = 0;i < n;i++){	
				scanf("%d",&x[i]);
				if(x[i] > maior){
						maior = x[i];
						pos = i;
				}		
			}
			x[pos] = 0;
			maior = -1;
			for(i = 0;i < n;i++){
				if(x[i] > maior){
						maior = x[i];
						pos = i;
				}		
			}	
			printf("%d\n",pos+1);	
			scanf("%d",&n);	
	}
	return 0;	
}
