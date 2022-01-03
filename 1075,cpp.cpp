#include <bits/stdc++.h>

int main(){
	int n,i;
	
	i=0;
	
	scanf("%d",&n);
	while(i<=10000){
		if(i % n == 2){
			printf("%d\n",i);
		}
	i++;
	}
return 0;
}
