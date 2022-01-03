#include <bits/stdc++.h>

int main(){
	int i,x;
	double n1,n2,n3,media;
	
	i=1;	
	
	scanf("%d",&x);
	
	while(i <= x){
		scanf("%lf%lf%lf",&n1,&n2,&n3);
		media=(n1 * 2.0 + n2 * 3.0 + n3 * 5.0) / 10.0;
		printf("%.1lf\n",media);
		i++;
	}
return 0;
}
