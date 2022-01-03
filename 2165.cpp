#include <bits/stdc++.h>

int main(){
	char tweet[501];
	int x;
	gets(tweet);
	x = strlen(tweet);
	if(x <= 140)
		printf("TWEET\n");
	else
		printf("MUTE\n");
return 0;
}
