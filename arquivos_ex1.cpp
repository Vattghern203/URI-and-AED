#include<stdio.h>

main(){
	FILE *vetor;
	char vtr;
	int i,grav;
	vetor=fopen("arqgrav1.txt","a");
	if(vetor == NULL)
		printf("\nOcorreu um erro na gravacao!");
	else{
		scanf("%c",&vtr);
		while(vtr != 'f'){
			fputc(vtr,vetor);
			putc('\n',vetor);
			if(ferror(vetor))
				printf("\nErro inesperado na gravacao");
			else
				printf("\nProcesso finalizado com sucesso");
		scanf("%c",&vtr);
		}
	}
	fclose(vetor);		
}
