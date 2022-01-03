#include <bits/stdc++.h>

int main(){
	int x,y,canais;
	float valort;
	scanf("%d%d",&x,&y);
	if(x == 1 && y == 1){
		valort = 80.80 * 0.95;
		canais = 32 + 6;
		printf("R$ %.2f\n",valort);
		printf("%d\n",canais);
	}
	if(x == 1 && y == 2){
		printf("R$ 80.80\n");
		printf("32\n");
	}
	if(x == 2 && y == 1){
		valort = 100.40 * 0.95;
		canais = 55 + 6;
		printf("R$ %.2f\n",valort);
		printf("%d\n",canais);
	}
	if(x == 2 && y == 2){
		printf("R$ 100.40\n");
		printf("55\n");
	}
	if(x == 3 && y == 1){
		valort = 130.23 * 0.90;
		canais = 70 + 11;
		printf("R$ %.2f\n",valort);
		printf("%d\n",canais);
	}
	if(x == 3 && y == 2){
		printf("R$ 130.23\n");
		printf("70\n");
	}
	if(x == 4 && y == 1){
		valort = 215.50 * 0.90;
		canais = 112 + 11;
		printf("R$ %.2f\n",valort);
		printf("%d\n",canais);
	}
	if(x == 4 && y == 2){
		printf("R$ 215.50\n");
		printf("112\n");
	}
return 0;
}
