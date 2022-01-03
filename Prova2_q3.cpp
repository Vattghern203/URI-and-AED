#include <bits/stdc++.h>

int main()
{
    int soma = 0,i = 0,tam,j; 
    char n[105];
    
    gets(n);
    tam = strlen(n);
    while(tam--){
    	if(n[tam] == '0' || n[tam] == '1'){
    		soma = soma + pow(2,i++) * (n[tam] - '0');
		}
	}
	printf("%d\n",soma);
return 0;
}

