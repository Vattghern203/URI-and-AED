#include <bits/stdc++.h>

int main(){
	int n,r,rm,rj;
	
	
	while(scanf("%d",&n) && n!= 0){
		
		rm=0;
		
		rj=0;
		
		for(;n > 0;n--){
			scanf("%d",&r);
				if(r == 0)
					rm++;
				if(r == 1)
					rj++;			
		}	
	printf("Mary won %d times and John won %d times\n",rm,rj);
	}
return 0;
}
