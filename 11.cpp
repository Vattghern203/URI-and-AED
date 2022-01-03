#include <bits/stdc++.h>

int main(){
int x,y,i,med,total,div=0;

scanf("%d%d",&x,&y);
	if(x > y){
		for(i=x;i=y;i--){
	
			if(i % 13 != 0){
				med = med + i;
				div++;
			}
		}
	}
	
	if(y > x){
		for(i=y;i=x;i--){
			if(i % 13 != 0){
				med = med + i;
				div++;
			}
		}
	}
	total = med / div;
	printf("%d\n",total);		
return 0;
}
