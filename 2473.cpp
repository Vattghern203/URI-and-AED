#include <bits/stdc++.h>

int main(){
	int apt[6],sort[6],i,j,acertos = 0;
	
	for(i = 0;i < 6;i++){
		scanf("%d",&apt[i]);
		scanf("%d",&sort[i]);
	}
	
	for(i = 0;i < 6;i++){
		for(j = 0;j < 6;j++)
			if(apt[i] = sort[j])
				acertos++;	
	}
	if(acertos == 3)
		printf("terno\n");
	if(acertos == 4)
		printf("quadra\n");
	if(acertos == 5)
		printf("quina\n");
	if(acertos == 6)
		printf("sena\n");
	if(acertos < 3)
		printf("azar\n");
return 0;
}
