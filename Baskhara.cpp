#include <bits/stdc++.h>
#include <math.h>

int main()
{
	int A,B,C,delta,deltaraiz;
	double x1,x2;
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	delta=(B*B)-4*A*C;
	printf("Delta = %d\n",delta);
	if (delta < 0){
		printf("Delta menor que zero\n");
}
		else ( delta >= 0);
		deltaraiz=sqrt(delta);
		x1=(-B + deltaraiz)/2;
		x2=(-B - deltaraiz)/2;
		printf("x1 = %.1d\n",x1);
		printf("x2 = %.1d\n",x2);
	return 0;
}
