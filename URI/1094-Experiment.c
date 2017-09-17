#include <stdio.h>

int main(){
    int n,i,a,total,t_c=0,t_r=0,t_s=0;;
    char c;
    double p;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %c",&a,&c);
        if(c=='C')
            t_c=t_c+a;
        else if(c=='R')
            t_r=t_r+a;
        else if(c=='S')
            t_s=t_s+a;
    }
    total=t_c+t_s+t_r;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",t_c);
    printf("Total de ratos: %d\n",t_r);
    printf("Total de sapos: %d\n",t_s);
    printf("Percentual de coelhos: %.2lf %%\n",(t_c*100.00)/total);
    printf("Percentual de ratos: %.2lf %%\n",(t_r*100.00)/total);
    printf("Percentual de sapos: %.2lf %%\n",(t_s*100.00)/total);
}
