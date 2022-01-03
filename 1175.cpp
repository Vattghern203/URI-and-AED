#include <bits/stdc++.h>

int main(){
	int i,x[20];
	
	for(i = 19;i > -1;i--){
		scanf("%d",&x[i]);
	}
	for(i = 0;i < 20;i++){
		printf("N[%d] = %d\n",i,x[i]);
	}
return 0;
}
