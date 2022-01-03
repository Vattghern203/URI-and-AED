#include <bits/stdc++.h>

int main()
{
	int p1,p2;
	scanf("%d%d",&p1,&p2);
	if(p2<=2)
		printf("nova\n");
	else if(p2 <= 96 && p1 <= p2)
		printf("crescente\n");
	else if(p2 <= 100 && p2 >=97)
		printf("cheia\n");
	else if(p2>=3 && p2 <= 96 && p1>p2)
		printf("minguante\n");
	return 0;
}
