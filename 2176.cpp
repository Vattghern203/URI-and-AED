#include <bits/stdc++.h>

int main(){
	char n[501];
	int tam,i,bits = 0;
	
	gets(n);
	tam = strlen(n);
	for(i = 0;i < tam;i++){
		if(n[i] == '1')
			bits++;
	}		
	if(bits % 2 == 0)
		n[i] = '0';
	else
		n[i] = '1';
		n[i+1] ='\0';
	
	printf("%s\n",n);
	
return 0;
}
