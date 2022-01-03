#include <bits/stdc++.h>

int main(){
	int x,posi;
	double num;
	
	posi = 0;
	
	x = 1;
	
	while(x <=6){
		scanf("%lf",&num);
		if(num > 0.0)
			posi=posi+1;
		
		
		x=x+1;
	}
		
	printf("%d valores positivos\n",posi);
return 0;
}

