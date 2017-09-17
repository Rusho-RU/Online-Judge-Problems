#include <stdio.h>

int main(){
    int m[100],i,n,j,k;
    for(;;){
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=0;i<n;i++)
            m[i]=i+1;
        for(i=0;i<n;i++)
            if(i==0)
                printf("%3d",m[i]);
            else
                printf(" %3d",m[i]);
        printf("\n");
        for(i=1;i<n;i++){
            for(j=i;j>0;j--){
                if(j==i)
                    printf("%3d",m[j]);
                else
                    printf(" %3d",m[j]);
            }
            for(k=0;k<n-i;k++){
                if(k==0)
                    printf(" %3d",m[k]);
                else
                    printf(" %3d",m[k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
