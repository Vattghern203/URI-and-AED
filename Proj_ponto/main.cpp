#include<bits/stdc++.h>
#include "ponto.h"

int main(){
    float d,a=10,b=21;
    Ponto *p,*q;
    p = cria(a,b);
    q = cria(7,25);
    acessa(p,&a,&b);
    d = distancia(p,q);
    printf("Distancia entre pontos: %f\n",d);
    libera(q);
    libera(p);
    return 0;
}
