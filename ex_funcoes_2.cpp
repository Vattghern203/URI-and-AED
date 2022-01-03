#include <bits/stdc++.h>

int oMaior (void);
int x,y,z;

int main(){
	int maior;
	scanf("%d%d%d",&x,&y,&z);
	maior = oMaior ();
	printf("%d eh o maior\n",maior);
}

int oMaior (void){
	int maiorxy,maiorf;
	maiorxy =  (x+y+abs(x-y))/2;
	maiorf =  (maiorxy+z+abs(maiorxy-z))/2;
	return maiorf;
}
