#include <stdio.h>

int main(){
    int a,b,o;
    scanf("%d%d",&a,&b);
    if(a==0)
        a=24;
    if(b==0)
        b=24;
    if(a==b)
        o=24;
    else
        if(a>b)
            o=24-a+b;
        else
            o=b-a;
    printf("O JOGO DUROU %d HORA(S)\n",o);
    return 0;
}
