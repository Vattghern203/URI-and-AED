#include <bits/stdc++.h>

struct aguaConsumo{
	char bandeira,ident,email,end;
	double consumo;
};

int main(){
	struct aguaConsumo AC[5];
	int i,nver = 0;
	double gasto[5],percentual = 0.0;
	
	for(i = 0;i < 5;i++){
		scanf("%s",&AC[i].ident);
		scanf("%s",&AC[i].end);
		scanf("%s",&AC[i].email);
		scanf("%lf",&AC[i].consumo);	
	}

	for(i = 0;i < 5;i++){
		if(AC[i].consumo >= 1.0 && AC[i].consumo <= 5.0){
			gasto[i] = AC[i].consumo + 15.78 * 1.34;
			AC[i].bandeira = 'verde';		
		}	
		if(AC[i].consumo >= 6.0 && AC[i].consumo <= 10.0){
			gasto[i] = AC[i].consumo + 15.78 * 3.40;
			AC[i].bandeira = 'amarela';
		}	
		if(AC[i].consumo >= 10.0 && AC[i].consumo <= 15.0){
			gasto[i] = AC[i].consumo + 15.78 * 6.49;
			AC[i].bandeira = 'laranja';
		}	
		if(AC[i].consumo > 15.0){
			gasto[i] = AC[i].consumo + 15.78 * 10.50;
			AC[i].bandeira = 'vermelha';
			nver++;	
		}		
	}
	
	for(i = 0;i < 5;i++){
		if(AC[i].bandeira == 'vermelha'){
			percentual = nver / 100 * 5;
			printf("O usuario: %s,residente em: %s,dono do email: %s,deve pagar a quantia de: %.2lf,devido a bandeira de cor %s\n",AC[i].ident,AC[i].end,AC[i].email,gasto[i]);
			printf("O percentual de uso da bandeira %s eh de: %.2lf\n",AC[i].bandeira,percentual);
		}
		else{
			printf("O usuario: %s,residente em: %s,dono do email: %s,deve pagar a quantia de: %.2lf,devido a bandeira de cor %s\n",AC[i].ident,AC[i].end,AC[i].email,gasto[i]);
			printf("bandeira %s\n",AC[i].bandeira);
		}
	}
	return 0;
}
