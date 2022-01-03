#include <bits/stdc++.h>

int main(){
	double x[100],n,div;
	int i;
		
	scanf("%lf",&n);
	
	x[0] = n;
	
	for(i = 1;i <= 99;i++){
		x[i] = x[i-1]/2.0;
	}
	for(i = 0;i <= 99;i++){
		printf("N[%d] = %.4lf\n",i,x[i]);
	}
return 0;
}
