#include <bits/stdc++.h>

int main(){
	int x,y;
	
	scanf("%d%d",&x,&y);
	if(x > y){
		do{
			y++;
			if((y % 5 == 2) || (y % 5 == 3))
				printf("%d\n",y);
		}while(y < x);
	}
	if(y > x){
		do{
			x++;
			if((x % 5 == 2) || (x % 5 == 3))
				printf("%d\n",x);	
		}while(x < y);
	}
return 0;
}
