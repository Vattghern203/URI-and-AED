#include<bits/stdc++.h>

main()
{
	int valor, cont;
    int *pt;
    cont = 10;
	pt = &cont;  //Pega o endereço de cont
	valor = *pt;	//Valor é igualado a cont de maneira indireta

    printf("Estado inicial\n");
    printf("\nValor armazenado na variavel cont:	 %d", cont);
    printf("\nEndereco de memoria da variavel cont:	 %d", &cont);
    printf("\nValor referenciado por pt         : %d", *pt);
    printf("\nEndereco de memoria do ponteiro pt  : %d -> eh o endereco de cont", pt);
    printf("\nValor armazenado na variavel valor:	 %d", valor);
    printf("\nEndereco de memoria da variavel valor:	 %d", &valor);


	*pt = cont + 5;

    printf("Estado inicial\n");
    printf("\nValor armazenado na variavel cont:	 %d", cont);
    printf("\nEndereco de memoria da variavel cont:	 %d", &cont);
    printf("\nValor armazenado na variavel pt         : %d", *pt);
    printf("\nEndereco de memoria da variavel pt  : %d -> eh o endereco de cont", pt);
    printf("\nValor armazenado na variavel valor:	 %d", valor);



}
