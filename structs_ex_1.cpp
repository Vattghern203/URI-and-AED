#include <bits/stdc++.h>

struct dadosPessoais{
	char nome[45];
	int idade;
	double salario;
};

int main(){
	struct dadosPessoais DP[10];
	int i;
	for(i = 0;i < 10;i++){
		scanf("%s",&DP[i].nome);
		scanf("%d",&DP[i].idade);
		scanf("%lf",&DP[i].salario);
	}
	for(i = 0;i < 10;i++){
		printf("%s, %d anos, salario de R$ %.2lf\n",DP[i].nome,DP[i].idade,DP[i].salario);
	}
	return 0;
}

