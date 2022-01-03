#include <bits/stdc++.h>

void restinho (int nx, int ny){
	if(nx >= ny){
		restinho(nx - ny, ny);
	}
	else
		printf("%d\n", nx);
}

int main(){
	int x, y;
	scanf("%d%d", &x, &y);
	restinho(x, y);
	return 0;
}

	
