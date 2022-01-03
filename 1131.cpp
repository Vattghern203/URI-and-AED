#include <bits/stdc++.h>

int main(){
	int i,grena,mv,emp,gi,gg,vg,vi,jogo;
	
	i=1;
	
	grena=1;
	
	emp=0;
	
	vg=0;
	
	vi=0;
	
	while(i < 2){
		scanf("%d%d",&gi,&gg);
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&jogo);
		if(jogo == 1){
			
			
			grena++;
		}
		if(gi > gg){
			vi++;
		}
		if(gg > gi){
			vg++;
		}
		if(gi == gg && gg == gi){
			emp++;
		}
		if(jogo == 2){
			printf("%d grenais\n",grena);
			printf("Inter:%d\n",vi);
			printf("Gremio:%d\n",vg);
			printf("Empates:%d\n",emp);
			if(vg < vi){
				printf("Inter venceu mais\n");
			}
			if(vi < vg){
				printf("Gremio venceu mais\n");
			}
		i++;
		}
	}
return 0;	
}
