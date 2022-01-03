#include <bits/stdc++.h>

int main(){
	int i,x,cy = 0,cn = 0,n;
	
	scanf("%d",&n);
	
	for(i = 0;i < n;i++){
		scanf("%d",&x);
		if(x == 0)
			cy++;
		if(x == 1)
			cn++;	
	}
	if(cy > cn)
		printf("Y\n");
	if((cn > cy) || (cn == cy && cy == cn))
		printf("N\n");
return 0;
}
