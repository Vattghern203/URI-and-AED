#include <bits/stdc++.h>

int main(){
	double m[5][5],mf[5][5];
	int c,l,i;
	
	for(l = 0;l < 5;l++){
		for(c = 0;c < 5;c++){
			scanf("%lf",&m[l][c]);
		}
	}
	
	for(l = 0;l < 5;l++){
		for(c = 0;c < 5;c++){
			if(l == 0)
				mf[l][c] = m[l][c] * m[0][0];
			if(l == 1)
				mf[l][c] = m[l][c] * m[1][1];
			if(l == 2)
				mf[l][c] = m[l][c] * m[2][2];
			if(l == 3)
				mf[l][c] = m[l][c] * m[3][3];
			if(l == 4)
				mf[l][c] = m[l][c] * m[4][4];
		}
	}
	
	for(l = 0;l < 5;l++){
		for(c = 0;c < 5;c++){
			printf("%.1lf\t",mf[l][c]);
		}
		printf("\n");
	}
	return 0;
}
