#include <stdio.h>

int main(){
    int a,b,c,d,o,m;
    scanf("%d%d%d%d",&a,&c,&b,&d);
    if(a==0)
        a=24;
    if(b==0)
        b=24;
    if(a==b){
        if(c>d){
                o=24-1;
                m=d+60-c;
            }
        else{
            o=24;
            m=d-c;
        }
    }
    else
        if(a>b)
            if(c>d){
                o=24-a+b-1;
                m=d+60-c;
            }
            else{
                o=24-a+b;
                m=d-c;
            }

        else
            if(c>d){
                o=b-a-1;
                m=d+60-c;
            }
            else{
                o=b-a;
                m=d-c;
            }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",o,m);
    return 0;
}
