void ordenacaobolha (int vet[], int tam)
{
 int i, j, aux;
 for(i = 0; i < 5; i++){
 	for(j = 4; j > i; j--){
 		if (vet[j] > vet[j - 1]){
 			aux=vet[j];
 			vet[j]= vet[j - 1];
 			vet[j - 1]=aux;
 		}
 	}
}
}

int main(){
	int x[100], t, i, final;
	scanf("%d",&t);
	for(i = 0; i < t; i++){
		scanf("%d",&x[i]);
	}
	final = ordenacaobolha(x[], t);
	for(i = 0; i < t;i++){
		printf("%d\n",x[i]);
	}
	return 0;
}

