#include <bits/stdc++.h>

int main(){
	double A,G,Ra,Rg,totalg,totala;
	scanf("%lf%lf%lf%lf",&A,&G,&Ra,&Rg);
	totalg=Rg/G;
	totala=Ra/A;
	if(totalg > totala)
		printf("G\n");
	else if(totala > totalg)
		printf("A\n");
	else if(totalg == totala)
		printf("G\n");
return 0;
		
}
