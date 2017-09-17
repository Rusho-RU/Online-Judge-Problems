#include <stdio.h>

int main(){
    int n,i,a,m,c;
    double p,total=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&c,&m);
        if(c==1001)
            p=1.50;
        else if(c==1002)
            p=2.50;
        else if(c==1003)
            p=3.50;
        else if(c==1004)
            p=4.50;
        else if(c==1005)
            p=5.50;
        total=total+p*m;
    }
    printf("%.2lf\n",total);
    return 0;
}
