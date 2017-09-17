#include <stdio.h>

int main(){
    int n,x,i,k;
    scanf("%d",&n);
    for(k=0;k<n;k++){
        scanf("%d",&x);
        for(i=2;i<x;i++){
            if(x%i==0){
                printf("%d nao eh primo\n",x);
                break;
            }
        }
        if(i==x)
            printf("%d eh primo\n",x);
    }
    return 0;
}
