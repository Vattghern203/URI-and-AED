#include <bits/stdc++.h>

int main(){
	float n1,n2,n3,n4,Media,exame,recup;
	scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
	Media=(n1*2+n2*3+n3*4+n4*1)/10;
	printf("Media: %.1f\n",Media);
	if(Media>=7.0)
		printf("Aluno aprovado.\n");
	else if(Media<5.0)
		printf("Aluno reprovado.\n");
	else if((Media>=5.0) || (Media<=6.9)){
		
		{
		printf("Aluno em exame.\n");
		scanf("%f",&exame);
		printf("Nota do exame: %.1f\n",exame);
		recup=((Media+exame)/2);
		}
				if(recup >= 5.0)
				{
					printf("Aluno aprovado.\n");
					printf("Media final: %.1f\n",recup);
				}
				else if(recup<5.0)
				{
					printf("Aluno reprovado.\n");
					printf("Media final: %.1f\n",recup);
				}
					
	return 0;				
	}

}

