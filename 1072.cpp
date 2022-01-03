#include <bits/stdc++.h>

int main(){
	
	int x,i,n,in,out;
	
	i=0;
	
	in=0;
	
	out=0;
	
	scanf("%d",&n);
	
	while(i < n){
		scanf("%d",&x);
		if(x >= 10 && x <= 20){
			in++;
		}
		if((x < 10 ) || (x > 20)){
			out++;
		}
	i++;
	}
	printf("%d in\n",in);
	printf("%d out\n",out);
return 0;
}
