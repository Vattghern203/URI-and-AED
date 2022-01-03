#include <bits/stdc++.h>

int main(){
	char s[10001];
	int i,n,cont;
	double tempo;
	
	scanf("%d",&n);
	
	for(i = 0;i < n;i++){
		scanf(" %[^\n]",s);
		cont = strlen(s);
		tempo = cont * 0.01;
		printf("%.2lf\n",tempo);
	}
return 0;
}
