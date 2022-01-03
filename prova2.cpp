#include <bits/stdc++.h>

int main(){
	int	x,y,z,i;
	i=0;
	while(i < 3){
	scanf("%d%d%d",&x,&y,&z);
		if((x < 2 || x > 12) || (y < 2 || x > 12 ) || (z < 2 || z > 12))
			printf("Valor invalido\n");
		else if((x % 2 == 0 || y % 2 == 0 || z % 2 == 0) && (x > 1 && x < 13 && y > 1 && y < 13 && z > 1 && z < 13 && x != 2 && y != 2 && z != 2))
			printf("Biu ganhou\n");
		else 
			printf("Biu perdeu\n");
	i++;
	}
return 0;	
}
