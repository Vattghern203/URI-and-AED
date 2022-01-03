#include <bits/stdc++.h>

struct pedidosClientes{
	int led;
	char descricao[45];
	double preco;
};

int main(){
	struct pedidosClientes PC[45];
	int i = 0,num = 0,qnt,numfinal = 0,j = 0;
	double pfinal = 0;
	scanf("%d",&qnt);
	for(i = 0;i < qnt;i++){
		scanf("%d",&PC[i].led);
		scanf(" %[^\n]",PC[i].descricao);
		scanf("%lf",&PC[i].preco);
	}
	
	while(PC[j].led != 0){
		scanf("%d",&PC[j].led);
			if(PC[j].led != 0){
				scanf("%d",&num);
				if(PC[j].led == PC[0].led)
					pfinal = pfinal + num * PC[0].preco;			
				if(PC[j].led == PC[1].led)				
					pfinal = pfinal + num * PC[1].preco;					
				if(PC[j].led == PC[2].led)				
					pfinal = pfinal + num * PC[2].preco;
		numfinal = numfinal + num;
		j++;	
			}
	}	
	printf("R$ %.2lf\n",pfinal);
	printf("%d\n itens",numfinal);
	return 0;
}
