#include<bits/stdc++.h>
#include "OperacoesMatematicas.h"

int main(){
    int op,a,b,res;
    do{
        printf("1- Soma\n");
        printf("2- Subtracao\n");
        printf("3- Sair\n");
        scanf("%d",&op);
        switch(op){
        case 1:
            printf("Digite o primeiro numero:\n");
            scanf("%d",&a);
            printf("Digite o segundo numero:\n");
            scanf("%d",&b);
            res=soma(a,b);
            printf("Soma=%d\n",res);
            break;
        case 2:
            printf("Digite o primeiro numero:\n");
            scanf("%d",&a);
            printf("Digite o segundo numero:\n");
            scanf("%d",&b);
            res=subtracao(a,b);
            printf("Subtracao=%d\n",res);
            break;
        }
    }while(op!=3);
    return 0;
}
