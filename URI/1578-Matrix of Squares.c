#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    int j=t,x;
    for(x=4;x<t+4;x++){
        if(x!=4)
            printf("\n");
        int n,i,j,k;
        scanf("%d",&n);
        int p[n];
        unsigned long long int a[n][n],max;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++){
                scanf("%llu",&a[i][j]);
                a[i][j]*=a[i][j];
            }
        for(j=0;j<n;j++){
            max=0;
            for(i=0;i<n;i++){
                if(a[i][j]>max)
                    max=a[i][j];
            }
            for(k=1;max!=0;k++)
                max/=10;
            p[j]=k-1;
        }
        printf("Quadrado da matriz #%d:\n",x);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(j!=0)
                    printf(" ");
                printf("%*llu",p[j],a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
