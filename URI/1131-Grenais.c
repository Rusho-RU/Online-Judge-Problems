#include <stdio.h>

int main(){
    int a,b,t=0,i=0,x,g=0,e=0;
    for(;;){
        scanf("%d%d",&a,&b);
        t++;
        if(a>b)
            i++;
        else if(b>a)
            g++;
        else
            e++;
        for(;;){
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d",&x);
            if(x==1 || x==2)
                break;
        }
        if(x==2)
            break;
    }
    printf("%d grenais\n",t);
    printf("Inter:%d\n",i);
    printf("Gremio:%d\n",g);
    printf("Empates:%d\n",e);
    if(i>g)
        printf("Inter venceu mais\n");
    else if(g>i)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");
    return 0;
}
