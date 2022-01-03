#include <bits/stdc++.h>

int main(){
	double nota,mediam,valid=0,nv=0;
	do{
		scanf("%lf",&nota);
		if((nota < 0 ) || (nota > 10))
			printf("nota invalida\n");
		else{
			nv = nv + nota;
			valid ++;
		}		
	}while(valid < 2);
	
	mediam = nv / 2;
	printf("media = %.2lf\n",mediam);
return 0;
}
