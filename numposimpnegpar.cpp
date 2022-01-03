#include <bits/stdc++.h>

int main(){
	int i,num,par,imp,pos,neg;
	
	i=1;
	num=0;
	par=0;
	imp=0;
	pos=0;
	neg=0;
	
	while(i <= 5){
		scanf("%d",&num);
		
		if(num % 2 == 0){
			par++;
		}
		
		if(num % 2 != 0){
			imp++;
		}
		
		if(num > 0){
			pos++;
		}
		
		if(num < 0){
			neg++;			
		}
		
		i=i+1;
	}
	printf("%d valor(es) par(es)\n",par);
	printf("%d valor(es) impar(es)\n",imp);
	printf("%d valor(es) positivo(s)\n",pos);
	printf("%d valor(es) negativo(s)\n",neg);
return 0;
}
