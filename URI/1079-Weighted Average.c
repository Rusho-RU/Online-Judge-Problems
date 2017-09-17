#include <stdio.h>

int main(){
    int n,i;
    double a,b,c,sum1=2.0+3.0+5.0,sum2;
    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%lf%lf%lf",&a,&b,&c);
        sum2=(a*2.0)+(b*3.0)+(c*5.0);
        printf("%.1lf\n",sum2/sum1);
    }
    return 0;
}
