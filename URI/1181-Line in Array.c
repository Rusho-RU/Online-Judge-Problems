#include <stdio.h>

int main(){
    int l,i,j;
    double m[12][12],sum=0;
    char c;
    scanf("%d %c",&l,&c);
    for(i=0;i<12;i++)
        for(j=0;j<12;j++)
            scanf("%lf",&m[i][j]);
    for(i=0;i<12;i++)
        sum=sum+m[l][i];
    if(c=='S')
        printf("%.1lf\n",sum);
    else
        printf("%.1lf\n",sum/12.0);
    return 0;
}
