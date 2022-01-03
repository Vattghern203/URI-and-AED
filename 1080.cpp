#include <bits/stdc++.h>

int main(){
	
	int x,maior,i,pos;
	
	maior=0;
	
	i=1;
	
	while(i <= 100){
		scanf("%d",&x);
		if(x > maior){
			maior=x;
			pos=i;	
		}
		i++;
	}
	printf("%d\n",maior);
	printf("%d\n",pos);
return 0;
}
