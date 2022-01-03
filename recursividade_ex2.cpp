#include <bits/stdc++.h>

void ehapotencia(int, int);

int main()
{
	int n1, n2;
	scanf("%d%d", &n1, &n2);
	ehapotencia(n1, n2);
	return 0;
}

void ehapotencia(int p1, int p2){
	int pot;
	pot = pow(p1, p2);
	printf("%d\n", pot);
}
