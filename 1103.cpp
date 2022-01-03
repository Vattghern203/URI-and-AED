#include <bits/stdc++.h>

int main(){
	
	int h1,m1,h2,m2,zzz;
	
	do{
		scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
		if(h1 != 0 || h2 != 0 || m1 != 0 || m2 != 0){
			if(h1 < h2){
				zzz = (h2 * 60 + m2) - (h1 * 60 + m1);
				printf("%d\n",zzz);
			}
			else if(h1 > h2){
				zzz = 1440 - (h2 * 60 + m2) + (h1 * 60 + m1);
				printf("%d\n",zzz);
			}
			else if(h1 == h2 && m1 >= m2){
				zzz = 1440 - (h2 * 60 + m2) + (h1 * 60 + m1);
				printf("%d\n",zzz);
			}
			else if(h1 == h2 && m1 < m2){
				zzz = m2 - m1;
				printf("%d\n",zzz);
			}
		}					
	}while(h1 != 0 && h2 != 0 && m1 != 0 && m2 != 0);
return 0;
}
