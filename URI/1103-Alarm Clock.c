#include <stdio.h>

int main(){
    while(1){
        int h1,m1,h2,m2;
        scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
        if(h1==0 && m1==0 && h2==0 && m2==0)
            break;
        int M1=h1*60+m1,M2=h2*60+m2,m;
        if(M1>M2)
            m=M2-M1+1440;
        else
            m=M2-M1;
        printf("%d\n",m);
    }
    return 0;
}
