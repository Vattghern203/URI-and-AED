#include <bits/stdc++.h>

int main(){
	int x,ano,mes,dia,rano;
	
	scanf("%d",&x);
	ano=x / 365;
	rano=x % 365;
	mes=rano / 30;
	dia=rano % 30;
	printf("%d ano(s)\n",ano);
	printf("%d mes(es)\n",mes);
	printf("%d dia(s)\n",dia);
return 0;
}
