#include <bits/stdc++.h>

double somadiv (int div){
	int r ;
	if(div == 1){
		return 1;
	}		
	else{
		return 1.0 / div + somadiv(div - 1);
	}	
}

int main(){
	int div;
	double s;
	scanf("%d",&div);
	s = somadiv(div);
	printf("Soma = %.2lf\n", s);
	return 0;	
}
