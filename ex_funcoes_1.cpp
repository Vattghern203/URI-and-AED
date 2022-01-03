#include <bits/stdc++.h>

double salarioFinal(void);
double salario,venda;

int main(){
	double comissao;
	scanf("%lf",&venda);
	scanf("%lf",&salario);
	comissao = salarioFinal ();
	printf("%.2lf\n",comissao);
}

double salarioFinal(void){
	double total;
	total = venda * 0.15 + salario;
	return total;
}
