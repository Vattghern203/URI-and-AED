#include <bits/stdc++.h>

struct notasAlunos{
	char matricula[45],nome[45];
	double nota1,nota2;
};

int main(){
	struct notasAlunos NA[25];
	int i;
	double notaF = 0;
	for(i = 0;i < 25;i++){
		scanf("%s",&NA[i].matricula);
		scanf("%s",&NA[i].nome);
		scanf("%d%d",&NA[i].nota1,&NA[i].nota2);
	}
	
	for(i = 0;i < 25;i++){
		printf("%s\n",NA[i].matricula);
		printf("%s\n",NA[i].nome);
		notaF = NA[i].nota1 + NA[i].nota2;
		printf("%.2lf\n",notaF);
		if(notaF < 30)
			printf("Aluno reprovado!\n");
		if(notaF >= 30)
			printf("Aluno aprovado!\n");
	}
	return 0;
}
