#include <stdio.h>

int main(){
    int i,j;
    double m[12][12],sum=0;
    char c;
    scanf("%c",&c);
    for(i=0;i<12;i++)
        for(j=0;j<12;j++){
            scanf("%lf",&m[i][j]);
            if(i<6 && j>(11-i))
                sum=sum+m[i][j];
            if(i>5 && j>i)
                sum=sum+m[i][j];
        }
    if(c=='S')
        printf("%.1lf\n",sum);
    else
        printf("%.1lf\n",sum/30.0);
    return 0;
}


