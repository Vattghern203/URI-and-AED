#include <bits/stdc++.h>

int main(){
	int i,n,mult;
	
	i=1;
	
	scanf("%d",&n);
	
	while(i <= 10){
		mult=i*n;
		printf("%d x %d = %d\n",i,n,mult);
		i++;	
	}
return 0;
}
