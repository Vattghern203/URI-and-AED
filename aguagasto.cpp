#include <bits/stdc++.h>

int main(){
	int gasto,total;
	scanf("%d",&gasto);
	if((gasto >= 0) && (gasto <= 10))
		printf("7\n");
	else if((gasto >= 11) && (gasto <= 30)){
		total=7+gasto-10;
		printf("%d\n",total);
	}
	else if((gasto >= 31) && (gasto <= 100)){
		total=7+gasto*2-40;
		printf("%d\n",total);
	}
	else if(gasto >= 101){
		total=7+gasto*5-340;
		printf("%d\n",total);	
	}
return 0;
}
