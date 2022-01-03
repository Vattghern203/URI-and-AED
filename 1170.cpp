#include <bits/stdc++.h>

int main(){ 
	int n,i,dias;
	float x;
	
	i = 0;
	
	scanf("%d",&n);
	
	do{
		scanf("%f",&x);
		dias = 0;
		while(x > 1){
			x /= 2;
			dias++;
		}
		printf("%d dias\n",dias);	
	i++;
	}while(i < n);
return 0;
}
