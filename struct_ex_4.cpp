#include <bits/stdc++.h>

struct dadosPessoais{
	char ident,end,email;
	double consumo;
};

int main(){
	struct dadosPessoais DP[5];
	int i;
	double gasto = 0;
	
	for(i = 0;i < 5;i++){
		scanf("%s",&DP[i].ident);
		scanf("%s",&DP[i].end);
		scanf("%s",&DP[i].email);
		scanf("%lf",&DP[i].consumo);
	}
	for(i = 0;i < 5;i++){
		if(DP[i].consumo >= 1.0 && DP[i].consumo <= 5.0)
			gasto = DP[i].consumo + 15.78 * 1.34;
		if(DP[i].consumo >= 6.0 && DP[i].consumo <= 10.0)
			gasto = DP[i].consumo + 15.78 * 3.40;
		if(DP[i].consumo >= 10.0 && DP[i].consumo <= 15.0)
			gasto = DP[i].consumo + 15.78 * 6.49;
		if(DP[i].consumo > 15.0)
			gasto = DP[i].consumo + 15.78 * 10.50;
		
		printf("O valor a ser pago e de:R$ %.2lf\n",gasto);
	}
	return 0;
}
