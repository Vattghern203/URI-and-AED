#include <bits/stdc++.h>

int main(){
	int n,x,y,i;
	float div;
	
	i=0;
	
	scanf("%d",&n);
	while(i < n){
	scanf("%d%d",&x,&y);
	if(x != y && y != 0){
		div=(float)x / y;
		printf("%.1f\n",div);
	}
	if(y == 0){
		printf("divisao impossivel\n");
	}	
	if(x == y && y != 0){
		div=(float)x / y;
	}
	i++;
	}
return 0;
}
