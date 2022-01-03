#include<bits/stdc++.h>

int main(){
	char va[100],texto[1000];
	int cont=0, i, j;
	while(scanf("%s",va)!=EOF){
		scanf(" %[^\n]",texto);
		for(i=0;i<strlen(va);i++){
			for(j=0;j<strlen(texto);j++){
				if(va[i]==texto[j])
					cont++;
			}
		}
		printf("%d\n",cont);
		cont = 0;
	}
	return 0;
}
