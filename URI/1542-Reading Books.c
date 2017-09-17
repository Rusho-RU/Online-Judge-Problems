#include <stdio.h>

int main(){
    int q,d,p;
    while(1){
        scanf("%d",&q);
        if(q==0)
            break;
        scanf("%d%d",&d,&p);
        int f=(p*d*q)/(p-q);
        printf("%d pagina",f);
        if(f!=1)
            printf("s");
        printf("\n");
    }
    return 0;
}
