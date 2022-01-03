#include <bits/stdc++.h>
#define I 6

int somasoma (int num[], int tam);

int main(){
	
	int num[I] = {1, 2, 3, 4, 5, 6};	
	
	int total = somasoma(num,I);	
	
	printf("%i\n", total);	
	
	return 0;
}

int somasoma(int num[],int tam){

	if(tam == 1)
		return num[0];
	else
		return num[tam - 1] + somasoma(num, tam - 1);
}


