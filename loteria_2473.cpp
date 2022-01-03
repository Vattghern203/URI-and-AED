#include <bits/stdc++.h>

int main(){
	int i = 0,n,sort[6],x[6],acertos = 0,j = 0;
	
	for(i = 0;i < 6;i++){
		scanf("%d",&x[i]);
		scanf("%d",&sort[i]);
	}
		while(j < 6){
			if(x[i] != sort[0]){
				i++;
				if(i == 5 && x[i] != sort[0])
					j++;
			}
			if(x[i] == sort[0]){
				acertos++;
				j++;
			}
			if(x[i] != sort[1]){
				i++;
				if(i == 5 && x[i] != sort[1])
					j++;
			}
			if(x[i] == sort[1]){
				acertos++;
				j++;
			}
			if(x[i] != sort[2]){
				i++;
				if(i == 5 && x[i] != sort[2])
					j++;
			}
			if(x[i] == sort[2]){
				acertos++;
				j++;
			}
			if(x[i] != sort[3]){
				i++;
				if(i == 5 && x[i] != sort[3])
					j++;
			}
			if(x[i] == sort[3]){
				acertos++;
				j++;
			}
			if(x[i] != sort[4]){
				i++;
				if(i == 5 && x[i] != sort[4])
					j++;
			}
			if(x[i] == sort[4]){
				acertos++;
				j++;
			}
			if(x[i] != sort[5]){
				i++;
				if(i == 5 && x[i] != sort[5])
					j++;
			}
			if(x[i] == sort[5]){
				acertos++;
				j++;
			}
			if(acertos < 3)
				printf("azar\n");
			else if(acertos == 3)
				printf("terno\n");
			else if(acertos == 4)
				printf("quadra\n");
			else if(acertos == 5)
				printf("quina\n");
			else if(acertos == 6)
				printf("sena\n");
		}
		
return 0;
}
