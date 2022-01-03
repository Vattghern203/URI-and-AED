#include <bits/stdc++.h>

int main(){
	int x,y,i;
	
	i=1;
	
	while(i < 10){
		scanf("%d%d",&x,&y);
		if(x > y){
			printf("Decrescente\n");
		}
		if(x < y){
			printf("Crescente\n");
		}
	i++;
	}
return 0;
}

