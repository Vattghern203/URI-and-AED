#include <bits/stdc++.h>

int main(){
	int h1,m1,h2,m2,hf,mf,divh,restm,total;
	scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
	if(h1<h2 && m1<m2){
		hf=(h1*60+m1);
		mf=(h2*60+m2);
		total=mf-hf;
		divh=total/60;
		restm=total%60;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S) \n",divh,restm);
	}
	if(h1>h2 && m2>m1){
		total=(60*24-h1*60+m1)+(h2*60+m2);
		divh=total/60;
		restm=total%60;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S) \n",divh,restm);
	}
	if(h1==h2 && m1>m2){
		total=((60*24)-(h1*60+m1))+(h2*60+m2);
		divh=total/60;
		restm=total%60;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S) \n",divh,restm);
	}
	if(h1==h2 && m1<m2){
		divh=h1-h2;
		restm=m2-m1;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S) \n",divh,restm);
	}
	if(h1==h2 && m1==m2){
		total=((60*24)-(h1*60+m1))+(h2*60+m2);
		divh=total/60;
		restm=total%60;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S) \n",divh,restm);
	}	
	if(h1>h2 && m1<m2){
		total=((60*24)-(h1*60+m1))+(h2*60+m2);
		divh=total/60;
		restm=total%60;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S) \n",divh,restm);
	}
	if(h1<h2 && m1>m2){
		total=((60*24)-(h1*60+m1))+(h2*60+m2);
		divh=total/60;
		restm=total%60;
		printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S) \n",restm);
	}
	if(h1<h2 && m1==m2){
		hf=(h1*60+m1);
		mf=(h2*60+m2);
		total=mf-hf;
		divh=total/60;
		restm=total%60;
		printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S) \n",divh);
	}	
return 0;
}
