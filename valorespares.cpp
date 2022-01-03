#include <bits/stdc++.h>

int main(){
	int i,num,par;
	
	i=1;
	
	par=0;
	
	while(i <= 5){
		scanf("%d",&num);
		if(num % 2 == 0)
			par=par+1;
		i=i+1;
	}
	printf("%d valores pares\n",par);
}
