#include <stdio.h>
#include <string.h>

main(){
	FILE *vetorc;
	char cres[10];
	char *exib;
	int i,j,aux;
	vetorc = fopen("arqgrav1.txt","r");
	if(vetorc == NULL)
		printf("\nErro ao abrir arquivo!");
	else{
		while(!feof(vetorc)){
			fscanf(vetorc,"%s",cres);
			if(ferror(vetorc))
				printf("\nErro ao ler arquivo!");
			else{
				for(i = 0;i < 10;i++){
					for(j = i + 1;j < 10;j++){
						if(cres[i] > cres[j]){
							aux = cres[i];
							cres[i] = cres[j];
							cres[j] = aux;
						}	
					}
				}
					printf("\nOperacao Bem Sucedida!\n");
					for(i = 0;i < 10;i++){
						printf("%c",cres[i]);
					}
			}
		}
	}
	fclose(vetorc);
}
