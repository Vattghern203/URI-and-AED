#include <bits/stdc++.h>

int main(){
	int x[25], i, j, aux;
	
	for(i = 0; i < 10;i++){
		scanf("%d",&x[i]);
	}
	for(i = 0;i < 10;i++){
		for(j = i + 1;j < 10 ; j++){
			if(x[i] < x[j]){
				aux = x[i];
				x[i] = x[j];
				x[j] = aux;
			}
		}
	}
	
	for(i = 0;i < 10;i++){
		printf("%d\n",x[i]);
	}
	return 0;
}
