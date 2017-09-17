#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);;
    int a[n+1][n+1],i,j,count;
    for(i=0;i<=n;i++)
        for(j=0;j<=n;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            count=0;
            if(a[i][j]==1)
                count++;
            if(a[i][j+1]==1)
                count++;
            if(a[i+1][j]==1)
                count++;
            if(a[i+1][j+1]==1)
                count++;
            if(count>1)
                printf("S");
            else
                printf("U");

        }
        printf("\n");
    }
}
