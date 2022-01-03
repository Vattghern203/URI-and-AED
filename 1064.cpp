#include <bits/stdc++.h>

int main(){
	int p,i;
	
	double x,media,soma;
	
	media=0;
	
	soma=0;
	
	i=1;
	
	p=0;
	
	while(i <= 6){
		scanf("%lf",&x);
		if(x > 0.0){
			p++;
			soma=soma+x;
		}
	i++;
	}
	media=(soma)/p;
	printf("%d valores positivos\n",p);
	printf("%.1lf\n",media);
return 0;	
}
