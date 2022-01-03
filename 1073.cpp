#include <bits/stdc++.h>

int main(){
	int x,i;
	
	i=1;
	
	scanf("%d",&x);
	
	while(i <= x){
		if(i % 2 == 0){
			printf("%d^2 = %d\n",i,i*i);	
		}
	i++;
	}
	
return 0;
}
