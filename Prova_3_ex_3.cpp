#include <bits/stdc++.h>


int potencia(int,int);

int main(){
	int x ,y ,pot;
	scanf("%d",&x);
	scanf("%d",&y);
	pot = potencia(x, y);
	printf("%d\n",pot);
	return 0;
}

int potencia(int a,int b){
	int result;
	result = a;
	while(b != 1){
		result = result * a;
		b--;
	}
	return result;
}
