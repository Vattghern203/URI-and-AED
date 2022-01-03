#include <bits/stdc++.h>

int *pc;

void ad(int *n1, int *n2){
	int c;
	c = *n1 + *n2;
	pc = &c;
}

int main(){
	int d, b, a;
	scanf("%d%d", &a, &b);
	ad(&a, &b);
	d = *pc;
	printf("%d\n", d);
	
	return 0;
}

