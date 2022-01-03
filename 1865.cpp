#include <bits/stdc++.h>

int main(){
	char h[10];
	int n,i,x;
	
	scanf("%d",&n);
	
	for(i = 0;i < n;i++){
		scanf(" %[^\n]",h);
		if(h[0]=='T' && h[1]=='h' && h[2]=='o' && h[3]=='r')
			printf("Y\n");
		else
			printf("N\n");
	}	
return 0;
}
