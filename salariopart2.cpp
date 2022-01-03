#include <bits/stdc++.h>

int main(){
	float salario,novosal,reajuste;
	scanf("%f",&salario);
	if(salario <= 400.00)
		{
			novosal=salario + salario*0.15;
			printf("Novo salario: %.2f\n",novosal);
			reajuste=salario*0.15;
			printf("Reajuste ganho: %.2f\n",reajuste);
			printf("Em percentual: 15 %%");	
		}
	else if((salario > 400.00) && (salario <= 800.00))
		{
			novosal=salario + salario*0.12;
			printf("Novo salario: %.2f\n",novosal);
			reajuste=salario*0.12;
			printf("Reajuste ganho: %.2f\n",reajuste);
			printf("Em percentual: 12 %%");
		}
	else if((salario > 800.00) && (salario <= 1200.00))
		{
			novosal=salario + salario*0.10;
			printf("Novo salario: %.2f\n",novosal);
			reajuste=salario*0.10;
			printf("Reajuste ganho: %.2f\n",reajuste);
			printf("Em percentual: 10 %%");
		}
	else if((salario > 1200.00) && (salario <= 2000.00))
		{
			novosal=salario + salario*0.07;
			printf("Novo salario: %.2f\n",novosal);
			reajuste=salario*0.07;
			printf("Reajuste ganho: %.2f\n",reajuste);
			printf("Em percentual: 7 %%");
		}
	else if(salario > 2000.00)
		{
			novosal=salario + salario*0.04;
			printf("Novo salario: %.2f\n",novosal);
			reajuste=salario*0.04;
			printf("Reajuste ganho: %.2f\n",reajuste);
			printf("Em percentual: 4 %%");
		}
	return 0;				
	}

