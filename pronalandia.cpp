#include <bits/stdc++.h>

int main(){
	
	char n[99999999991];
	int i,j,tam;
	
	scanf("%s",&n);
	
	tam = strlen(n);
	
	for(i = 0;i < tam;i++){
		for(j = i;j >tam;j++){
			n[i] = n[j];
		}
	}
	printf("%s\n",n);
return 0;
}
