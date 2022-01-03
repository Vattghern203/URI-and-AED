#include <bits/stdc++.h>

void muda(int *n1, int *n2){
	int aux;
	aux = *n1;
	*n1 = *n2;
	*n2 = aux;
}

int main(){
	int x, y;
	scanf("%d%d", &x, &y);
	muda(&x, &y);
	printf("a = %d\nb = %d \n",x ,y);
	return 0;
}
