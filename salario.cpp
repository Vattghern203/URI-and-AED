#include <bits/stdc++.h>

int main(){
	int A,B,C,mAB,Maior;
	scanf("%d",&A),
	scanf("%d",&B);
	scanf("%d",&C);
	mAB=(A+B+abs(A-B))/2;
	C=(mAB+C+abs(mAB-C))/2;
	printf("%d eh o maior\n" ,C);
	return 0;
}


