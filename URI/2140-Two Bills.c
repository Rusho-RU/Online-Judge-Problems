#include <stdio.h>

void main(){
    int n,m,i;
    int a[]={7,12,22,52,102,15,25,55,105,30,60,110,70,120,150};
    for(;;){
        scanf("%d%d",&n,&m);
        if(n==0 && m==0)
            break;
        else{
            int sub=m-n;
            if(sub>150 || sub<7)
                printf("impossible\n");
            else{
                for(i=0;i<15;i++)
                    if(a[i]==sub)
                        break;
                if(i==15)
                    printf("impossible\n");
                else
                    printf("possible\n");
            }
        }
    }
    return 0;
}
