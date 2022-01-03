#include <bits/stdc++.h>

int main(){
	int n,i;
	double med;
	
	i=1;
	
	do{
		scanf("%d",&n);
		if(n > 0);
			n=n + n;
			i++;	
	}while(n > 0);
	med=n / i;
	printf("%.2lf",med);
return 0;
}
