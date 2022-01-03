#include <bits/sdtc++.h>

int main()
{
	int A,B,C,delta;
	double x1,x2;
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	delta=((B*2)-4*A*C);
	printf("Delta = %d\n",delta);
	if (delta < 0){
		printf("Delta menor que zero");
}
		else ( delta >= 0);
		x1=-(b)+sqrt(delta)/(2*A);
		x2=-(b)-sqrt(delta)/(2*A);
		printf("x1 = %d\n",x1);
		printf("x2 = %d\n",x2);
	return 0;
}
