#include <bits/stdc++.h>

int main(){
	char s[110];
	int i,j,led,n,tamanho;

	scanf("%d",&n);	
	
	for(i = 0;i < n;i++){
		scanf("%s",&s);			
		tamanho = strlen(s);
		led = 0;
		for(j = 0;j < tamanho;j++){
			if(s[j]=='1')
				led = led + 2;
			if(s[j]=='2')
				led = led + 5;
			if(s[j]=='3')
				led = led + 5;
			if(s[j]=='4')
				led = led + 4;
			if(s[j]=='5')
				led = led + 5;
			if(s[j]=='6')
				led = led + 6;
			if(s[j]=='7')
				led = led + 3;
			if(s[j]=='8')
				led = led + 7;
			if(s[j]=='9')
				led = led + 6;
			if(s[j]=='0')
				led = led + 6;
		}
		printf("%d leds\n",led);
	}
return 0;
}
