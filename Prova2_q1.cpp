#include <bits/stdc++.h>

int main(){
	int port,mat,aprov;
	double red;
	
	aprov = 0;
	
	while(scanf("%d",&port)== 1 && port >= 0){
		scanf("%d%lf",&mat,&red);
			if(port >= 40 && mat >= 21 && red >= 7.0)
				aprov++;						
	}
	printf("%d\n",aprov);
return 0;
}
