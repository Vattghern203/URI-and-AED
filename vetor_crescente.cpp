#include <bits/stdc++.h>

int main(){
	int x[10],aux,cont,i,j;
	
	for(i = 0;i < 10;i++){
		scanf("%d",&x[i]);
	}
	for(i = 0;i < 10;i++){
		for(j = i;j < 10;j++){
				if(x[i] > x[j]){
					aux = x[i];
					x[i] = x[j];
					x[j] = aux;
				}
		}
	}
	for(i = 0;i < 10;i++){
		printf("%d\n",x[1]);	
	}
return 0;	
}
