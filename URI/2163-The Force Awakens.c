#include <stdio.h>

void main(){
    int n,m,i,j,flag=0;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]==42){
                if(a[i-1][j-1]==7 && a[i-1][j]==7 && a[i-1][j+1]==7 && a[i][j-1]==7 && a[i][j+1]==7 && a[i+1][j-1]==7 && a[i+1][j]==7 && a[i+1][j+1]==7){
                    printf("%d %d\n",i+1,j+1);
                    exit(0);
                }
            }
        }
    }
    printf("0 0\n");
}
