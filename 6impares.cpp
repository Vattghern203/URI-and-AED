#include <bits/stdc++.h>

int main (){
	int i,x;

	scanf("%d",&x);
	
	i=0;
	while(i < 6){
		if(x % 2 != 0){
			printf("%d\n",x);
			i++;	
		}	
		x++;
	}
return 0;
}
