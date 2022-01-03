#include <bits/stdc++.h>

void binario(int num){
	int r;
	if(num / 2 != 0){
		r = num / 2;
		binario(r);
		printf("%d",num % 2);
	}
	else{
		printf("%d", num % 2);
	}	
}

int main(){
	int num;
	scanf("%d",&num);
	printf("Conversao Binaria = ");
	binario(num);
	return 0;	
}
