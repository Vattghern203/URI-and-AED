#include <bits/stdc++.h>

int main(){
	int i,m[6],s[6],j,acertos;
	
	acertos = 0;
	
	for(i = 0;i < 6;i++){
		scanf("%d",&m[i]);
	}
	for(j = 0;j < 6;j++){
		scanf("%d",&s[j]);
	}
	for(i = 0;i < 6;i++){
		if(m[i] == s[0])
			acertos++;
		if(m[i] == s[1])
			acertos++;
		if(m[i] == s[2])
			acertos++;
		if(m[i] == s[3])
			acertos++;
		if(m[i] == s[4])
			acertos++;
		if(m[i] == s[5])
			acertos++;	
	}
		if(acertos < 3)
			printf("azar\n");
		if(acertos == 3)
			printf("terno\n");
		if(acertos == 4)
			printf("quadra\n");
		if(acertos == 5)
			printf("quina\n");
		if(acertos == 6)
			printf("sena\n");
return 0;
}
