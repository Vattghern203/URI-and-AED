#include<bits/stdc++.h>

int main(){
    int x=10;
    int *px;

    printf("O valor da variavel x e: %d\n",x);
    px=&x;
    *px=*px+3;
    printf("Agora x vale: %d, que e a mesma coisa que: %d\n",x,*px);

    return 0;
}
