#include <bits/stdc++.h>

int main(){
	char vog[100],fra[1000];
	int qntv=0,j,i;
	while(scanf("%s",vog)!=EOF){
		scanf(" %[^\n]",fra);
		for(i=0;i<strlen(vog);i++){
			for(j=0;i<strlen(fra);j++){
				if(vog[i]==fra[j])  
					qntv++;
			}
		}
		printf("%d\n",qntv);
		qntv=0;
	}
return 0;
}
