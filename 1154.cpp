#include <bits/stdc++.h>

int main(){
	int x,id=0,qnt=0;
	double med;
	
	do{
		scanf("%d",&x);
		if(x > 0){
			id = id + x;
			qnt++;	
		}
	}while( x > 0);
	med = (double)id / qnt;
	printf("%.2lf\n",med);
return 0;
}

