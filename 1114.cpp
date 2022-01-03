#include <bits/stdc++.h>

int main(){
	int senha,x,i;
	
	i=0;
	
	senha=2002;
	
	while(i < 1){
		scanf("%d",&x);
		if(x == senha){
			printf("Acesso Permitido\n");
			i++;
		}
		if(x != senha){
			printf("Senha Invalida\n");
		}
	}
return 0;
}
