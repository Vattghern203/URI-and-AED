#include <bits/stdc++.h>

int main(){
	int h1,m1,h2,m2,hfinal,mfinal,rm;
	scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
	if(h1==h2 && m1==m2)
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S) \n");
	else if(h1<h2 && m1<m2){
		hfinal=h2-h1;
		mfinal=(m2-h1)-1;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S) \n",hfinal,mfinal);
	}
	else if(h1<h2 && m1>m2){
		rm=m1-m2;
		mfinal=60-(m1-m2);
		hfinal=(h2-h1)-rm;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S) \n",hfinal,mfinal);
	}
return 0;		
}
