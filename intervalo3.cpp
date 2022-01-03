#include <bits/stdc++.h>

int main(){
	
int in,out,i,x,n;

in=0;

out=0;

i=1;

scanf("%d",&n);
while(i <= n){
	scanf("%d",&x);
	if(x >= 10 && x <= 20){
		in++;
	}
	if((x < 10) || (x > 20)){
		out++;
	}
	i++;
}
printf("%d in\n",in);
printf("%d out\n",out);
return 0;
}
