#include <bits/stdc++.h>

int main(){
	int port,mat,ok,aprov = 0;
	float red;
	
	do{
		scanf("%d",&mat);
		scanf("%f",&red);
		ok = 0;
		if(port >= 40)
			ok++;
		else if(mat >= 21)
			ok++;
		else if(red >= 7.0)
				ok++;
		else if(ok == 3)
			aprov++;
	}while(scanf("%d",&port) >= 0);
	printf("%d\n",aprov);
return 0;
}
