#include <bits/stdc++.h>

int main(){
	char s[999999];
	int i;
	scanf("%s",s);
	for(i = strlen(s)-1;i >= 0;i--){
		printf("%c",s[i]);
	}
	printf("\n");
	return 0;
}
