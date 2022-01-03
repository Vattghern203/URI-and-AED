#include <bits/stdc++.h>

int main(){
	int item,quant;
	float total;
	scanf("%d%d",&item,&quant);
	switch(item){
		case 1:
			total=quant*4.00;
			printf("Total: R$ %.2f\n",total);
			break;
		case 2:
			total=quant*4.50;
			printf("Total: R$ %.2f\n",total);
			break;
		case 3:
			total=quant*5.00;
			printf("Total: R$ %.2f\n",total);
			break;
		case 4:
			total=quant*2.00;
			printf("Total: R$ %.2f\n",total);
			break;
		case 5:
			total=quant*1.50;
			printf("Total: R$ %.2f\n",total);
			break;
	}
return 0;	
}

