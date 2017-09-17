#include <stdio.h>

int main(){
    int n,x,i,k,sum;
    scanf("%d",&n);
    for(k=0;k<n;k++){
        sum=0;
        scanf("%d",&x);
        for(i=1;i<x;i++){
            if(x%i==0)
                sum=sum+i;
        }
        if(sum==x)
            printf("%d eh perfeito\n",x);
        else
            printf("%d nao eh perfeito\n",x);
    }
    return 0;
}
