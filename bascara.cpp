#include <bits/stdc++.h>
#include <math.h>

int main(){
	double a,b,c,delta,R1,R2;
	
	scanf("%lf%lf%lf",&a,&b,&c);
	delta=(b*b)-4*a*c;
	if(delta < 0)
		printf("Impossivel calcular\n");
	if(delta >= 0){
		R1=-(b)+sqrt(delta)/(2*a);
		R2=-(b)-sqrt(delta)/(2*a);
		printf("%.5lf",R1);
		printf("%.flf",R2);
	}
return 0;		
}
