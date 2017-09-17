#include <stdio.h>

int main(){
    int n,n1=-1,n2=1,i,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sum=n1+n2;
        n1=n2;
        n2=sum;
        if(i==n-1)
            printf("%d\n",sum);
        else
            printf("%d ",sum);
    }
    return 0;
}
