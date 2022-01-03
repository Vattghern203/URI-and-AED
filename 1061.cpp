#include <bits/stdc++.h>

int main(){
	int dia,hr,min,seg,df,hf,mf,sf,dt,ht,mt,st;
	
	printf("Dia ");
	scanf("%d",&dia);
	scanf("%d%d%d",&hr,&min,&seg);
	printf("Dia ");
	scanf("%d",&df);
	scanf("%d%d%d",&hf,&mf,&sf);
	
	dt=df-dia-1;
	ht=24-(df-dia);
	mt=mf-min;
	seg=sf-seg;
	
	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",dt,ht,mt,st);
return 0;
	
}
