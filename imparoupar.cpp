#include <bits/stdc++.h>

int main (){
	int i,n,x;
	
	i=1;
	
	scanf("%d",&n);
	while(i <= n){
		scanf("%d",&x);
		if(x % 2 == 0 && x > 0){
			printf("EVEN POSITIVE\n");
		}
		if(x % 2 != 0 && x > 0){
			printf("ODD POSITIVE\n");
		}
		if(x < 0 && x % 2 != 0){
			printf("ODD NEGATIVE\n");
		}
		if(x < 0 && x % 2 == 0){
			printf("EVEN NEGATIVE\n");
		}
		if(x == 0){
			printf("NULL\n");
		}
	i++;
	}
return 0;	
}
