#include <bits/stdc++.h>

struct dadosPessoais{
	char nome[45];
	int idade;
	double salario;	
};

int main(){
	struct dadosPessoais DP[10];
	int i,maior = 0,menor = 100;
	double media = 0;
	for(i = 0;i < 10;i++){
		scanf("%s",&DP[i].nome);
		scanf("%d",&DP[i].idade);
		scanf("%lf",&DP[i].salario);
		if(DP[i].idade > maior)
			maior = DP[i].idade;
		if(DP[i].idade < menor && DP[i].idade != maior)
			menor = DP[i].idade;
		media = media + DP[i].idade;
	}
	
	media = media / 10;
	printf("%.2lf\n",media);
	printf("%d\n",maior);
	printf("%d\n",menor);
	
	return 0;
}
